/********************************************************************************
** Form generated from reading UI file 'pogodexsafe.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POGODEXSAFE_H
#define UI_POGODEXSAFE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pogodexsafe
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *Menu;
    QPushButton *ButtonPogodexTravel;
    QPushButton *ButtonPogodexSail;
    QPushButton *ButtonPogodexSki;
    QPushButton *ButtonPogodexSafe;
    QPushButton *ButtonPogodexWeek;
    QDial *dial;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *pogodexsafe)
    {
        if (pogodexsafe->objectName().isEmpty())
            pogodexsafe->setObjectName("pogodexsafe");
        pogodexsafe->resize(1034, 721);
        centralwidget = new QWidget(pogodexsafe);
        centralwidget->setObjectName("centralwidget");
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 10, 999, 79));
        textBrowser->setStyleSheet(QString::fromUtf8("width: 80%;\n"
"height: 26px;"));
        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(10, 100, 111, 575));
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

        dial = new QDial(centralwidget);
        dial->setObjectName("dial");
        dial->setGeometry(QRect(580, 190, 50, 64));
        pogodexsafe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(pogodexsafe);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1034, 21));
        pogodexsafe->setMenuBar(menubar);
        statusbar = new QStatusBar(pogodexsafe);
        statusbar->setObjectName("statusbar");
        pogodexsafe->setStatusBar(statusbar);

        retranslateUi(pogodexsafe);

        QMetaObject::connectSlotsByName(pogodexsafe);
    } // setupUi

    void retranslateUi(QMainWindow *pogodexsafe)
    {
        pogodexsafe->setWindowTitle(QCoreApplication::translate("pogodexsafe", "MainWindow", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("pogodexsafe", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt; font-weight:700;\">Pogodex Safe</span></p></body></html>", nullptr));
        ButtonPogodexTravel->setText(QString());
        ButtonPogodexSail->setText(QString());
        ButtonPogodexSki->setText(QString());
        ButtonPogodexSafe->setText(QString());
        ButtonPogodexWeek->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pogodexsafe: public Ui_pogodexsafe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POGODEXSAFE_H
