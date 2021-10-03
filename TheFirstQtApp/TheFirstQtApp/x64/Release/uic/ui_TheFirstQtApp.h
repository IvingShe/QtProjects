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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TheFirstQtAppClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *edtUserName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *edtPassword;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnLogin;
    QPushButton *btnExit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TheFirstQtAppClass)
    {
        if (TheFirstQtAppClass->objectName().isEmpty())
            TheFirstQtAppClass->setObjectName(QString::fromUtf8("TheFirstQtAppClass"));
        TheFirstQtAppClass->resize(300, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TheFirstQtAppClass->sizePolicy().hasHeightForWidth());
        TheFirstQtAppClass->setSizePolicy(sizePolicy);
        TheFirstQtAppClass->setMinimumSize(QSize(300, 400));
        TheFirstQtAppClass->setMaximumSize(QSize(300, 400));
        TheFirstQtAppClass->setCursor(QCursor(Qt::WaitCursor));
        centralWidget = new QWidget(TheFirstQtAppClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMinimumSize(QSize(400, 350));
        centralWidget->setMaximumSize(QSize(400, 350));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        edtUserName = new QLineEdit(centralWidget);
        edtUserName->setObjectName(QString::fromUtf8("edtUserName"));

        horizontalLayout->addWidget(edtUserName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        edtPassword = new QLineEdit(centralWidget);
        edtPassword->setObjectName(QString::fromUtf8("edtPassword"));

        horizontalLayout_2->addWidget(edtPassword);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout_3->addWidget(radioButton);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btnLogin = new QPushButton(centralWidget);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));

        horizontalLayout_4->addWidget(btnLogin);

        btnExit = new QPushButton(centralWidget);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        sizePolicy.setHeightForWidth(btnExit->sizePolicy().hasHeightForWidth());
        btnExit->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(btnExit);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        TheFirstQtAppClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TheFirstQtAppClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 300, 23));
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
        label->setText(QApplication::translate("TheFirstQtAppClass", "QQ\347\231\273\345\275\225", nullptr));
        label_2->setText(QApplication::translate("TheFirstQtAppClass", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_3->setText(QApplication::translate("TheFirstQtAppClass", "\345\257\206 \347\240\201\357\274\232", nullptr));
        radioButton->setText(QString());
        label_4->setText(QApplication::translate("TheFirstQtAppClass", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        btnLogin->setText(QApplication::translate("TheFirstQtAppClass", "\347\231\273\345\275\225", nullptr));
        btnExit->setText(QApplication::translate("TheFirstQtAppClass", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TheFirstQtAppClass: public Ui_TheFirstQtAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEFIRSTQTAPP_H
