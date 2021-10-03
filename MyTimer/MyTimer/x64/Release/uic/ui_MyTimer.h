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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyTimerClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyTimerClass)
    {
        if (MyTimerClass->objectName().isEmpty())
            MyTimerClass->setObjectName(QString::fromUtf8("MyTimerClass"));
        MyTimerClass->resize(600, 400);
        menuBar = new QMenuBar(MyTimerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        MyTimerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyTimerClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MyTimerClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(MyTimerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MyTimerClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MyTimerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MyTimerClass->setStatusBar(statusBar);

        retranslateUi(MyTimerClass);

        QMetaObject::connectSlotsByName(MyTimerClass);
    } // setupUi

    void retranslateUi(QMainWindow *MyTimerClass)
    {
        MyTimerClass->setWindowTitle(QApplication::translate("MyTimerClass", "MyTimer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyTimerClass: public Ui_MyTimerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTIMER_H
