/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
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
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QPushButton *ButtonSearch;
    QLineEdit *Miasto;
    QTextBrowser *dane;
    QTabWidget *cos;
    QWidget *Pn;
    QWidget *Wt;
    QWidget *Sr;
    QWidget *Czw;
    QWidget *Pt;
    QWidget *Sob;
    QWidget *Nd;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1041, 748);
        MainWindow->setMinimumSize(QSize(1041, 748));
        MainWindow->setMaximumSize(QSize(1041, 748));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 26, 1001, 81));
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

        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(780, 120, 241, 571));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        ButtonSearch = new QPushButton(formLayoutWidget);
        ButtonSearch->setObjectName("ButtonSearch");
        ButtonSearch->setStyleSheet(QString::fromUtf8("image: url(:/imgs/Grafiki/lupa.jpg);\n"
"width: 22px;\n"
"height: 22px;\n"
"border: 1px solid black;"));

        formLayout->setWidget(0, QFormLayout::LabelRole, ButtonSearch);

        Miasto = new QLineEdit(formLayoutWidget);
        Miasto->setObjectName("Miasto");

        formLayout->setWidget(0, QFormLayout::FieldRole, Miasto);

        dane = new QTextBrowser(formLayoutWidget);
        dane->setObjectName("dane");

        formLayout->setWidget(1, QFormLayout::SpanningRole, dane);

        cos = new QTabWidget(centralwidget);
        cos->setObjectName("cos");
        cos->setGeometry(QRect(140, 120, 631, 571));
        cos->setTabShape(QTabWidget::Triangular);
        Pn = new QWidget();
        Pn->setObjectName("Pn");
        Pn->setStyleSheet(QString::fromUtf8(""));
        cos->addTab(Pn, QString());
        Wt = new QWidget();
        Wt->setObjectName("Wt");
        cos->addTab(Wt, QString());
        Sr = new QWidget();
        Sr->setObjectName("Sr");
        cos->addTab(Sr, QString());
        Czw = new QWidget();
        Czw->setObjectName("Czw");
        cos->addTab(Czw, QString());
        Pt = new QWidget();
        Pt->setObjectName("Pt");
        cos->addTab(Pt, QString());
        Sob = new QWidget();
        Sob->setObjectName("Sob");
        cos->addTab(Sob, QString());
        Nd = new QWidget();
        Nd->setObjectName("Nd");
        cos->addTab(Nd, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1041, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        cos->setCurrentIndex(0);


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
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt; font-weight:700;\">Pogodex Week</span></p></body></html>", nullptr));
        ButtonPogodexTravel->setText(QString());
        ButtonPogodexSail->setText(QString());
        ButtonPogodexSki->setText(QString());
        ButtonPogodexSafe->setText(QString());
        ButtonPogodexWeek->setText(QString());
        ButtonSearch->setText(QString());
#if QT_CONFIG(accessibility)
        Miasto->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        Miasto->setInputMask(QString());
        Miasto->setText(QString());
        Miasto->setPlaceholderText(QCoreApplication::translate("MainWindow", "Wpisz Miasto", nullptr));
#if QT_CONFIG(tooltip)
        cos->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Pn</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cos->setTabText(cos->indexOf(Pn), QCoreApplication::translate("MainWindow", "     Pn     ", nullptr));
#if QT_CONFIG(whatsthis)
        Wt->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(accessibility)
        Wt->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        cos->setTabText(cos->indexOf(Wt), QCoreApplication::translate("MainWindow", "     Wt     ", nullptr));
        cos->setTabText(cos->indexOf(Sr), QCoreApplication::translate("MainWindow", "     \305\232r     ", nullptr));
        cos->setTabText(cos->indexOf(Czw), QCoreApplication::translate("MainWindow", "     Czw     ", nullptr));
        cos->setTabText(cos->indexOf(Pt), QCoreApplication::translate("MainWindow", "     Pt     ", nullptr));
        cos->setTabText(cos->indexOf(Sob), QCoreApplication::translate("MainWindow", "     Sob     ", nullptr));
        cos->setTabText(cos->indexOf(Nd), QCoreApplication::translate("MainWindow", "     Nd     ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
