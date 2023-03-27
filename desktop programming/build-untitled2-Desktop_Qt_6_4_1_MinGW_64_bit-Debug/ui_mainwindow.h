/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *Banner;
    QTextBrowser *textBrowser;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *Menu;
    QPushButton *ButtonPogodexTravel;
    QPushButton *ButtonPogodexSail;
    QPushButton *ButtonPogodexSki;
    QPushButton *ButtonPogodexSafe;
    QPushButton *ButtonPogodexWeek;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1283, 748);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 26, 1241, 81));
        Banner = new QVBoxLayout(verticalLayoutWidget);
        Banner->setObjectName("Banner");
        Banner->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(verticalLayoutWidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setStyleSheet(QString::fromUtf8("width: 80%;\n"
"height: 26px;"));

        Banner->addWidget(textBrowser);

        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(19, 113, 111, 575));
        Menu = new QVBoxLayout(verticalLayoutWidget_4);
        Menu->setObjectName("Menu");
        Menu->setContentsMargins(0, 0, 0, 0);
        ButtonPogodexTravel = new QPushButton(verticalLayoutWidget_4);
        ButtonPogodexTravel->setObjectName("ButtonPogodexTravel");
        ButtonPogodexTravel->setStyleSheet(QString::fromUtf8("image: url(:/imgs/Grafiki/week.png);\n"
"width: 100px;\n"
"height: 100px;"));

        Menu->addWidget(ButtonPogodexTravel);

        ButtonPogodexSail = new QPushButton(verticalLayoutWidget_4);
        ButtonPogodexSail->setObjectName("ButtonPogodexSail");
        ButtonPogodexSail->setStyleSheet(QString::fromUtf8("image: url(:/imgs/Grafiki/travel.png);\n"
"width: 100px;\n"
"height: 100px;"));

        Menu->addWidget(ButtonPogodexSail);

        ButtonPogodexSki = new QPushButton(verticalLayoutWidget_4);
        ButtonPogodexSki->setObjectName("ButtonPogodexSki");
        ButtonPogodexSki->setStyleSheet(QString::fromUtf8("image: url(:/imgs/Grafiki/safe.png);\n"
"width: 100px;\n"
"height: 100px;"));

        Menu->addWidget(ButtonPogodexSki);

        ButtonPogodexSafe = new QPushButton(verticalLayoutWidget_4);
        ButtonPogodexSafe->setObjectName("ButtonPogodexSafe");
        ButtonPogodexSafe->setStyleSheet(QString::fromUtf8("image: url(:/imgs/Grafiki/sail.png);\n"
"width: 100px;\n"
"height: 100px;"));

        Menu->addWidget(ButtonPogodexSafe);

        ButtonPogodexWeek = new QPushButton(verticalLayoutWidget_4);
        ButtonPogodexWeek->setObjectName("ButtonPogodexWeek");
        ButtonPogodexWeek->setStyleSheet(QString::fromUtf8("image: url(:/imgs/Grafiki/ski.png);\n"
"width: 100px;\n"
"height: 100px;\n"
""));

        Menu->addWidget(ButtonPogodexWeek);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(170, 120, 261, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/imgs/Grafiki/lupa.jpg);\n"
"width: 22px;\n"
"height: 22px;\n"
"border: 1px solid black;"));

        horizontalLayout->addWidget(pushButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1283, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt; font-weight:700;\">Pogodex</span></p></body></html>", nullptr));
        ButtonPogodexTravel->setText(QString());
        ButtonPogodexSail->setText(QString());
        ButtonPogodexSki->setText(QString());
        ButtonPogodexSafe->setText(QString());
        ButtonPogodexWeek->setText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
