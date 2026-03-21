/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QFrame *frame;
    QFrame *frame_2;
    QTextEdit *textEdit_Log;
    QFrame *frame_3;
    QPushButton *BtnRead;
    QLabel *label_6;
    QLineEdit *lineEdit_CalibrationData;
    QLabel *label_5;
    QPushButton *BtnWrite;
    QPushButton *Clear_Log;
    QWidget *page_2;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_LotNo;
    QLineEdit *lineEdit_Expiry;
    QLineEdit *lineEdit_TestCode;
    QLabel *label;
    QLineEdit *lineEdit_TestName;
    QLabel *label_4;
    QPushButton *BtnOpen;
    QPushButton *BtnReadAll;
    QPushButton *BtnReadAll_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 480);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 800, 480));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        frame = new QFrame(page);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 781, 441));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(390, 10, 381, 421));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        textEdit_Log = new QTextEdit(frame_2);
        textEdit_Log->setObjectName(QString::fromUtf8("textEdit_Log"));
        textEdit_Log->setGeometry(QRect(10, 10, 361, 401));
        textEdit_Log->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(10, 10, 371, 421));
        frame_3->setStyleSheet(QString::fromUtf8(""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        BtnRead = new QPushButton(frame_3);
        BtnRead->setObjectName(QString::fromUtf8("BtnRead"));
        BtnRead->setGeometry(QRect(10, 230, 161, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Gadugi"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        BtnRead->setFont(font);
        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(100, 100, 181, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(252, 255, 67);"));
        lineEdit_CalibrationData = new QLineEdit(frame_3);
        lineEdit_CalibrationData->setObjectName(QString::fromUtf8("lineEdit_CalibrationData"));
        lineEdit_CalibrationData->setGeometry(QRect(10, 140, 351, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(16);
        lineEdit_CalibrationData->setFont(font2);
        lineEdit_CalibrationData->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-radius:15px;"));
        lineEdit_CalibrationData->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(140, 20, 101, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Algerian"));
        font3.setPointSize(36);
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 123);"));
        BtnWrite = new QPushButton(frame_3);
        BtnWrite->setObjectName(QString::fromUtf8("BtnWrite"));
        BtnWrite->setGeometry(QRect(190, 230, 171, 81));
        BtnWrite->setFont(font);
        Clear_Log = new QPushButton(frame_3);
        Clear_Log->setObjectName(QString::fromUtf8("Clear_Log"));
        Clear_Log->setGeometry(QRect(10, 325, 351, 81));
        Clear_Log->setFont(font);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 160, 100, 40));
        label_2->setFont(font1);
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 219, 100, 41));
        label_3->setFont(font1);
        lineEdit_LotNo = new QLineEdit(page_2);
        lineEdit_LotNo->setObjectName(QString::fromUtf8("lineEdit_LotNo"));
        lineEdit_LotNo->setGeometry(QRect(380, 220, 180, 50));
        lineEdit_LotNo->setFont(font2);
        lineEdit_LotNo->setAlignment(Qt::AlignCenter);
        lineEdit_Expiry = new QLineEdit(page_2);
        lineEdit_Expiry->setObjectName(QString::fromUtf8("lineEdit_Expiry"));
        lineEdit_Expiry->setGeometry(QRect(380, 280, 180, 50));
        lineEdit_Expiry->setFont(font2);
        lineEdit_Expiry->setAlignment(Qt::AlignCenter);
        lineEdit_TestCode = new QLineEdit(page_2);
        lineEdit_TestCode->setObjectName(QString::fromUtf8("lineEdit_TestCode"));
        lineEdit_TestCode->setGeometry(QRect(380, 160, 180, 50));
        lineEdit_TestCode->setFont(font2);
        lineEdit_TestCode->setAlignment(Qt::AlignCenter);
        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 100, 100, 40));
        label->setFont(font1);
        lineEdit_TestName = new QLineEdit(page_2);
        lineEdit_TestName->setObjectName(QString::fromUtf8("lineEdit_TestName"));
        lineEdit_TestName->setGeometry(QRect(380, 100, 180, 50));
        lineEdit_TestName->setFont(font2);
        lineEdit_TestName->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(260, 280, 100, 40));
        label_4->setFont(font1);
        BtnOpen = new QPushButton(page_2);
        BtnOpen->setObjectName(QString::fromUtf8("BtnOpen"));
        BtnOpen->setGeometry(QRect(520, 360, 160, 50));
        BtnOpen->setFont(font);
        BtnReadAll = new QPushButton(page_2);
        BtnReadAll->setObjectName(QString::fromUtf8("BtnReadAll"));
        BtnReadAll->setGeometry(QRect(180, 360, 160, 50));
        BtnReadAll->setFont(font);
        BtnReadAll_2 = new QPushButton(page_2);
        BtnReadAll_2->setObjectName(QString::fromUtf8("BtnReadAll_2"));
        BtnReadAll_2->setGeometry(QRect(350, 360, 160, 50));
        BtnReadAll_2->setFont(font);
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        BtnRead->setText(QCoreApplication::translate("MainWindow", "Read", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Calibration Data", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "RFID", nullptr));
        BtnWrite->setText(QCoreApplication::translate("MainWindow", "Write", nullptr));
        Clear_Log->setText(QCoreApplication::translate("MainWindow", "Clear Log", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "TestCode", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "LotNo", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TestName", nullptr));
        lineEdit_TestName->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Expiry", nullptr));
        BtnOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        BtnReadAll->setText(QCoreApplication::translate("MainWindow", "Read All Blocks", nullptr));
        BtnReadAll_2->setText(QCoreApplication::translate("MainWindow", "Read Full Sectors ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
