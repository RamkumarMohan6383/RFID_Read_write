#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QThread>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(0);
    this->setStyleSheet(R"(

    QMainWindow {
        background-color: #2b2b2b;
    }

    /* TEXT EDIT (LOG) */
    QTextEdit {
        color: #00ffcc;

 border: 2px solid #00ffcc;
    border-radius: 15px;
    background-color: #1e1e1e;

        padding: 8px;
        font-family: Consolas;
        font-size: 18px;
    }

    /* LINE EDIT */
    QLineEdit {
        background-color: #f0f0f0;
        border: 2px solid #00c896;
        border-radius: 15px;
        padding: 6px;
        font-size: 14px;
    }

    /* BUTTON */
    QPushButton {
border-radius: 15px;
    background: qlineargradient(x1:0, y1:0, x2:1, y2:1,
                                stop:0 #00c896, stop:1 #007a5c);
        color: white;
        padding: 10px;
        font-weight: bold;
    }

    QPushButton:hover {
        background-color: #00a67d;
    }

    QPushButton:pressed {
        background-color: #007a5c;
    }

    )");

    reader = new Reader(this);
    logMessage("Reader initialized", Qt::green);
    qDebug() << "Reader initialized (DLL loaded)";
}

MainWindow::~MainWindow()
{
    delete reader;
    delete ui;
}

QString MainWindow::formatStr(QString str)
{
    QRegExp regExp("[^a-fA-F0-9]");
    return str.replace(regExp,"");
}

void MainWindow::convertStr(unsigned char *after, QString before, int length)
{
    for(int i=0;i<length;i++)
    {
        after[i] = before.midRef(2*i,2).toInt(0,16);
    }
}

void MainWindow::logMessage(QString text, QColor color)
{
    QTextCharFormat format;
    format.setForeground(color);

    QTextCursor cursor = ui->textEdit_Log->textCursor();
    cursor.movePosition(QTextCursor::End);

    cursor.insertText(text + "\n", format);

    ui->textEdit_Log->setTextCursor(cursor);
}

bool MainWindow::writeSector(int startBlock, QByteArray raw)
{
    unsigned char key[6];
    convertStr(key, "FFFFFFFFFFFF", 6);

    unsigned char *buffer = new unsigned char[48];
    memset(buffer, 0, 48);

    memcpy(buffer, raw.data(), raw.size());

    int res = reader->MF_Write(0x01, startBlock, 3, key, buffer);

    delete[] buffer;

    return (res == 0);
}


void MainWindow::on_BtnWrite_clicked()
{
    if (!reader) return;

    QString cardId;

    if (!detectCard(cardId))
    {
        logMessage("No Card Detected", Qt::red);
        beepError();
        return;
    }

    logMessage("CARD ID: " + cardId, Qt::cyan);

    QByteArray raw = ui->lineEdit_CalibrationData->text().toUtf8();

    if (raw.size() < 32 || raw.size() > 48)
    {
        logMessage("Invalid Data Size (32–48)", Qt::red);
        beepError();
        return;
    }

    while (raw.size() < 48)
        raw.append('\0');

    if (!writeSector(4, raw))
    {
        logMessage("Write FAILED", Qt::red);
        beepError();
        return;
    }

    logMessage("Write SUCCESS", Qt::green);
    beepSuccess();
}


bool MainWindow::detectCard(QString &cardId)
{
    unsigned char snrFlag = 0;
    unsigned char uid[4] = {0};

    int res = reader->MF_Getsnr(0x26, 0x00, &snrFlag, uid);

    if (res != 0)
        return false;

    cardId = QByteArray((char*)uid, 4).toHex().toUpper();
    return true;
}

bool MainWindow::readSector(int startBlock, QByteArray &outData)
{
    unsigned char key[6];
    convertStr(key, "FFFFFFFFFFFF", 6);

    unsigned char *buffer = new unsigned char[48];
    memset(buffer, 0, 48);

    int res = reader->MF_Read(0x01, startBlock, 3, key, buffer);

    if (res != 0)
    {
        delete[] buffer;
        return false;
    }

    outData = QByteArray((char*)buffer, 48);

    delete[] buffer;
    return true;
}

void MainWindow::on_BtnRead_clicked()
{
    if (!reader) return;

    QString cardId;

    if (!detectCard(cardId))
    {
        logMessage("No Card Detected", Qt::red);
        beepError();
        return;
    }

    logMessage("CARD ID: " + cardId, Qt::cyan);

    QByteArray data;

    if (!readSector(4, data))   // sector 1
    {
        logMessage("Read FAILED", Qt::red);
        beepError();
        return;
    }

    QString text = QString::fromLatin1(data).trimmed();

    logMessage("Read SUCCESS", Qt::green);
    logMessage("DATA: " + text, Qt::blue);

   // ui->lineEdit_CalibrationData->setText(text);

    beepSuccess();
}

void MainWindow::on_BtnReadAll_clicked()
{
    if (!reader) return;

    logMessage("---- READ ALL SAFE ----", QColor("#00E5FF"));

    unsigned char key[6];
    convertStr(key, "FFFFFFFFFFFF", 6);

    unsigned char mode = 0x00;

    // ✅ ONLY READ 3 BLOCKS (skip trailer)
    unsigned char startBlock = 0x00;
    unsigned char numBlocks  = 3;

    unsigned char *buffer = new unsigned char[16 * numBlocks];
    memset(buffer, 0, 16 * numBlocks);

    int result = reader->MF_Read(mode, startBlock, numBlocks, key, buffer);

    if (result != 0)
    {
        logMessage("Read FAILED", Qt::red);
        delete[] buffer;
        beepError();
        return;
    }

    logMessage("Read SUCCESS", Qt::green);

    for (int i = 0; i < numBlocks; i++)
    {
        QByteArray blockData((char*)(buffer + (i * 16)), 16);

        QString hexStr = QString::fromLatin1(blockData.toHex(' ').toUpper());

        logMessage(QString("Block %1: %2")
                   .arg(startBlock + i)
                   .arg(hexStr),
                   QColor("#00BFFF"));
    }

    delete[] buffer;
    beepSuccess();
}

void MainWindow::beepSuccess()
{
    if (!reader) return;

    unsigned char buffer = 0;

    // 🔊 short success beep (like demo)
    reader->ControlBuzzer(10, 1, &buffer);
}

void MainWindow::beepError()
{
    if (!reader) return;

    unsigned char buffer = 0;

    // ❌ NO SOUND (mute)
    // If you want error beep, use:
    // reader->ControlBuzzer(30, 5, &buffer);
}

void MainWindow::on_Clear_Log_clicked()
{
    ui->textEdit_Log->clear();
}




void MainWindow::on_BtnReadAll_2_clicked()
{
    unsigned char key[6];
       convertStr(key, "FFFFFFFFFFFF", 6);

       unsigned char mode = 0x00;

       for (int sector = 0; sector < 16; sector++)
       {
           int startBlock = sector * 4;

           logMessage(QString("---- Sector %1 ----").arg(sector), Qt::cyan);

           // read only 3 blocks (skip trailer)
           unsigned char *buffer = new unsigned char[16 * 3];
           memset(buffer, 0, 48);

           int res = reader->MF_Read(mode, startBlock, 3, key, buffer);

           if (res != 0)
           {
               logMessage("Read FAILED", Qt::red);
               delete[] buffer;
               continue;
           }

           for (int i = 0; i < 3; i++)
           {
               QByteArray data((char*)(buffer + (i * 16)), 16);

               QString hexStr = QString::fromLatin1(data.toHex(' ').toUpper());

               logMessage(QString("Block %1: %2")
                          .arg(startBlock + i)
                          .arg(hexStr),
                          QColor("#00BFFF"));
           }

           delete[] buffer;

           QThread::msleep(100); // important
       }
}

