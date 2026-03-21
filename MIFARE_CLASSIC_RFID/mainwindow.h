#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "reader.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_BtnRead_clicked();
    void on_BtnWrite_clicked();
    void on_BtnReadAll_clicked();
    void logMessage(QString text, QColor color);
    QString formatStr(QString str);
    void convertStr(unsigned char *after, QString before, int length);
    void beepSuccess();
    void beepError();
    bool writeSector(int startBlock, QByteArray raw);
    bool readSector(int startBlock, QByteArray &outData);
    bool detectCard(QString &cardId);
    void on_Clear_Log_clicked();

    void on_BtnReadAll_2_clicked();

private:
    Ui::MainWindow *ui;
    Reader *reader;
};

#endif // MAINWINDOW_H
