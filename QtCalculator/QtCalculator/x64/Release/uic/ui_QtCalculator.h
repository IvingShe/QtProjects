/********************************************************************************
** Form generated from reading UI file 'QtCalculator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCALCULATOR_H
#define UI_QTCALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtCalculatorClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *lab_display;
    QGridLayout *gridLayout;
    QPushButton *btn_9;
    QPushButton *btn_8;
    QPushButton *btn_4;
    QPushButton *btn_7;
    QPushButton *btn_6;
    QPushButton *btn_clear;
    QPushButton *btn_2;
    QPushButton *btn_sub;
    QPushButton *btn_0;
    QPushButton *btn_add;
    QPushButton *btn_3;
    QPushButton *btn_5;
    QPushButton *btn_1;
    QPushButton *btn_equal;
    QPushButton *btn_mul;
    QPushButton *btn_div;

    void setupUi(QWidget *QtCalculatorClass)
    {
        if (QtCalculatorClass->objectName().isEmpty())
            QtCalculatorClass->setObjectName(QString::fromUtf8("QtCalculatorClass"));
        QtCalculatorClass->resize(358, 527);
        QIcon icon;
        icon.addFile(QString::fromUtf8("E:/\350\277\205\351\233\267\344\270\213\350\275\275/[China  18+] \346\226\260\351\207\221\347\223\266\346\242\205 Xin.Jin.Ping.Mei.1996.[I,II,III, IV, V] DVDRip.x264.AC3/Cover/\346\226\260\351\207\221\347\223\266\346\242\205[5].jpg"), QSize(), QIcon::Normal, QIcon::Off);
        QtCalculatorClass->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(QtCalculatorClass);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        lab_display = new QLabel(QtCalculatorClass);
        lab_display->setObjectName(QString::fromUtf8("lab_display"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lab_display->sizePolicy().hasHeightForWidth());
        lab_display->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(36);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        lab_display->setFont(font);
        lab_display->setMouseTracking(false);
        lab_display->setStyleSheet(QString::fromUtf8("font: 36pt \"\346\245\267\344\275\223\";\n"
"background-color: rgb(148, 177, 255);\n"
"color: rgb(85, 0, 255);"));
        lab_display->setLineWidth(1);
        lab_display->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        verticalLayout->addWidget(lab_display);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn_9 = new QPushButton(QtCalculatorClass);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));
        sizePolicy.setHeightForWidth(btn_9->sizePolicy().hasHeightForWidth());
        btn_9->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(12);
        btn_9->setFont(font1);

        gridLayout->addWidget(btn_9, 0, 2, 1, 1);

        btn_8 = new QPushButton(QtCalculatorClass);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));
        sizePolicy.setHeightForWidth(btn_8->sizePolicy().hasHeightForWidth());
        btn_8->setSizePolicy(sizePolicy);
        btn_8->setFont(font1);

        gridLayout->addWidget(btn_8, 0, 1, 1, 1);

        btn_4 = new QPushButton(QtCalculatorClass);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));
        sizePolicy.setHeightForWidth(btn_4->sizePolicy().hasHeightForWidth());
        btn_4->setSizePolicy(sizePolicy);
        btn_4->setFont(font1);

        gridLayout->addWidget(btn_4, 1, 0, 1, 1);

        btn_7 = new QPushButton(QtCalculatorClass);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));
        sizePolicy.setHeightForWidth(btn_7->sizePolicy().hasHeightForWidth());
        btn_7->setSizePolicy(sizePolicy);
        btn_7->setFont(font1);

        gridLayout->addWidget(btn_7, 0, 0, 1, 1);

        btn_6 = new QPushButton(QtCalculatorClass);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));
        sizePolicy.setHeightForWidth(btn_6->sizePolicy().hasHeightForWidth());
        btn_6->setSizePolicy(sizePolicy);
        btn_6->setFont(font1);

        gridLayout->addWidget(btn_6, 1, 2, 1, 1);

        btn_clear = new QPushButton(QtCalculatorClass);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));
        sizePolicy.setHeightForWidth(btn_clear->sizePolicy().hasHeightForWidth());
        btn_clear->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        btn_clear->setFont(font2);

        gridLayout->addWidget(btn_clear, 3, 0, 1, 1);

        btn_2 = new QPushButton(QtCalculatorClass);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));
        sizePolicy.setHeightForWidth(btn_2->sizePolicy().hasHeightForWidth());
        btn_2->setSizePolicy(sizePolicy);
        btn_2->setFont(font1);

        gridLayout->addWidget(btn_2, 2, 1, 1, 1);

        btn_sub = new QPushButton(QtCalculatorClass);
        btn_sub->setObjectName(QString::fromUtf8("btn_sub"));
        sizePolicy.setHeightForWidth(btn_sub->sizePolicy().hasHeightForWidth());
        btn_sub->setSizePolicy(sizePolicy);
        btn_sub->setFont(font2);

        gridLayout->addWidget(btn_sub, 1, 3, 1, 1);

        btn_0 = new QPushButton(QtCalculatorClass);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));
        sizePolicy.setHeightForWidth(btn_0->sizePolicy().hasHeightForWidth());
        btn_0->setSizePolicy(sizePolicy);
        btn_0->setFont(font1);

        gridLayout->addWidget(btn_0, 3, 1, 1, 1);

        btn_add = new QPushButton(QtCalculatorClass);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        sizePolicy.setHeightForWidth(btn_add->sizePolicy().hasHeightForWidth());
        btn_add->setSizePolicy(sizePolicy);
        btn_add->setFont(font2);

        gridLayout->addWidget(btn_add, 0, 3, 1, 1);

        btn_3 = new QPushButton(QtCalculatorClass);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));
        sizePolicy.setHeightForWidth(btn_3->sizePolicy().hasHeightForWidth());
        btn_3->setSizePolicy(sizePolicy);
        btn_3->setFont(font1);

        gridLayout->addWidget(btn_3, 2, 2, 1, 1);

        btn_5 = new QPushButton(QtCalculatorClass);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));
        sizePolicy.setHeightForWidth(btn_5->sizePolicy().hasHeightForWidth());
        btn_5->setSizePolicy(sizePolicy);
        btn_5->setFont(font1);

        gridLayout->addWidget(btn_5, 1, 1, 1, 1);

        btn_1 = new QPushButton(QtCalculatorClass);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));
        sizePolicy.setHeightForWidth(btn_1->sizePolicy().hasHeightForWidth());
        btn_1->setSizePolicy(sizePolicy);
        btn_1->setFont(font1);

        gridLayout->addWidget(btn_1, 2, 0, 1, 1);

        btn_equal = new QPushButton(QtCalculatorClass);
        btn_equal->setObjectName(QString::fromUtf8("btn_equal"));
        sizePolicy.setHeightForWidth(btn_equal->sizePolicy().hasHeightForWidth());
        btn_equal->setSizePolicy(sizePolicy);
        btn_equal->setFont(font2);

        gridLayout->addWidget(btn_equal, 3, 2, 1, 1);

        btn_mul = new QPushButton(QtCalculatorClass);
        btn_mul->setObjectName(QString::fromUtf8("btn_mul"));
        sizePolicy.setHeightForWidth(btn_mul->sizePolicy().hasHeightForWidth());
        btn_mul->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setPointSize(14);
        btn_mul->setFont(font3);

        gridLayout->addWidget(btn_mul, 2, 3, 1, 1);

        btn_div = new QPushButton(QtCalculatorClass);
        btn_div->setObjectName(QString::fromUtf8("btn_div"));
        sizePolicy.setHeightForWidth(btn_div->sizePolicy().hasHeightForWidth());
        btn_div->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        btn_div->setFont(font4);

        gridLayout->addWidget(btn_div, 3, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 8);

        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(QtCalculatorClass);

        QMetaObject::connectSlotsByName(QtCalculatorClass);
    } // setupUi

    void retranslateUi(QWidget *QtCalculatorClass)
    {
        QtCalculatorClass->setWindowTitle(QApplication::translate("QtCalculatorClass", "Qt\350\256\241\347\256\227\345\231\250", nullptr));
        lab_display->setText(QApplication::translate("QtCalculatorClass", "0", nullptr));
        btn_9->setText(QApplication::translate("QtCalculatorClass", "9", nullptr));
        btn_8->setText(QApplication::translate("QtCalculatorClass", "8", nullptr));
        btn_4->setText(QApplication::translate("QtCalculatorClass", "4", nullptr));
        btn_7->setText(QApplication::translate("QtCalculatorClass", "7", nullptr));
        btn_6->setText(QApplication::translate("QtCalculatorClass", "6", nullptr));
        btn_clear->setText(QApplication::translate("QtCalculatorClass", "c", nullptr));
        btn_2->setText(QApplication::translate("QtCalculatorClass", "2", nullptr));
        btn_sub->setText(QApplication::translate("QtCalculatorClass", "-", nullptr));
        btn_0->setText(QApplication::translate("QtCalculatorClass", "0", nullptr));
        btn_add->setText(QApplication::translate("QtCalculatorClass", "+", nullptr));
        btn_3->setText(QApplication::translate("QtCalculatorClass", "3", nullptr));
        btn_5->setText(QApplication::translate("QtCalculatorClass", "5", nullptr));
        btn_1->setText(QApplication::translate("QtCalculatorClass", "1", nullptr));
        btn_equal->setText(QApplication::translate("QtCalculatorClass", "=", nullptr));
        btn_mul->setText(QApplication::translate("QtCalculatorClass", "*", nullptr));
        btn_div->setText(QApplication::translate("QtCalculatorClass", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtCalculatorClass: public Ui_QtCalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCALCULATOR_H
