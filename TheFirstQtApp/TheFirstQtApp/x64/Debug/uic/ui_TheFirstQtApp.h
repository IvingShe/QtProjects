/********************************************************************************
** Form generated from reading UI file 'TheFirstQtApp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEFIRSTQTAPP_H
#define UI_THEFIRSTQTAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TheFirstQtAppClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QCheckBox *checkBox;
    QCommandLinkButton *commandLinkButton;
    QDialogButtonBox *buttonBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TheFirstQtAppClass)
    {
        if (TheFirstQtAppClass->objectName().isEmpty())
            TheFirstQtAppClass->setObjectName(QString::fromUtf8("TheFirstQtAppClass"));
        TheFirstQtAppClass->resize(600, 400);
        centralWidget = new QWidget(TheFirstQtAppClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 120, 75, 23));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(240, 200, 89, 16));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(310, 270, 71, 16));
        commandLinkButton = new QCommandLinkButton(centralWidget);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(200, 290, 185, 41));
        buttonBox = new QDialogButtonBox(centralWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(280, 220, 156, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        TheFirstQtAppClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TheFirstQtAppClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        TheFirstQtAppClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TheFirstQtAppClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TheFirstQtAppClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TheFirstQtAppClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TheFirstQtAppClass->setStatusBar(statusBar);

        retranslateUi(TheFirstQtAppClass);

        QMetaObject::connectSlotsByName(TheFirstQtAppClass);
    } // setupUi

    void retranslateUi(QMainWindow *TheFirstQtAppClass)
    {
        TheFirstQtAppClass->setWindowTitle(QApplication::translate("TheFirstQtAppClass", "TheFirstQtApp", nullptr));
        pushButton->setText(QApplication::translate("TheFirstQtAppClass", "PushButton", nullptr));
        radioButton->setText(QApplication::translate("TheFirstQtAppClass", "RadioButton", nullptr));
        checkBox->setText(QApplication::translate("TheFirstQtAppClass", "CheckBox", nullptr));
        commandLinkButton->setText(QApplication::translate("TheFirstQtAppClass", "CommandLinkButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TheFirstQtAppClass: public Ui_TheFirstQtAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEFIRSTQTAPP_H
