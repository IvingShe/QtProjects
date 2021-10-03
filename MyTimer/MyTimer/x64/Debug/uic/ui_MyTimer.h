/********************************************************************************
** Form generated from reading UI file 'MyTimer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTIMER_H
#define UI_MYTIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyTimerClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLCDNumber *lcdNumber;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_start;
    QPushButton *btn_stop;
    QPushButton *btn_pause;
    QPushButton *btn_log;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyTimerClass)
    {
        if (MyTimerClass->objectName().isEmpty())
            MyTimerClass->setObjectName(QString::fromUtf8("MyTimerClass"));
        MyTimerClass->resize(750, 600);
        centralWidget = new QWidget(MyTimerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setDigitCount(16);

        verticalLayout->addWidget(lcdNumber);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_start = new QPushButton(centralWidget);
        btn_start->setObjectName(QString::fromUtf8("btn_start"));

        horizontalLayout->addWidget(btn_start);

        btn_stop = new QPushButton(centralWidget);
        btn_stop->setObjectName(QString::fromUtf8("btn_stop"));

        horizontalLayout->addWidget(btn_stop);

        btn_pause = new QPushButton(centralWidget);
        btn_pause->setObjectName(QString::fromUtf8("btn_pause"));

        horizontalLayout->addWidget(btn_pause);

        btn_log = new QPushButton(centralWidget);
        btn_log->setObjectName(QString::fromUtf8("btn_log"));

        horizontalLayout->addWidget(btn_log);


        verticalLayout->addLayout(horizontalLayout);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 7);
        MyTimerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyTimerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 750, 23));
        MyTimerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyTimerClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MyTimerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MyTimerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MyTimerClass->setStatusBar(statusBar);

        retranslateUi(MyTimerClass);

        QMetaObject::connectSlotsByName(MyTimerClass);
    } // setupUi

    void retranslateUi(QMainWindow *MyTimerClass)
    {
        MyTimerClass->setWindowTitle(QApplication::translate("MyTimerClass", "\346\210\221\347\232\204\350\256\241\346\227\266\345\231\250", nullptr));
        btn_start->setText(QApplication::translate("MyTimerClass", "\345\274\200\345\247\213", nullptr));
        btn_stop->setText(QApplication::translate("MyTimerClass", "\345\201\234\346\255\242", nullptr));
        btn_pause->setText(QApplication::translate("MyTimerClass", "\346\232\202\345\201\234", nullptr));
        btn_log->setText(QApplication::translate("MyTimerClass", "\346\211\223\347\202\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyTimerClass: public Ui_MyTimerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTIMER_H
