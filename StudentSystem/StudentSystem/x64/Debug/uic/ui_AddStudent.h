/********************************************************************************
** Form generated from reading UI file 'AddStudent.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENT_H
#define UI_ADDSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddStudentClass
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *leName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *leId;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QRadioButton *rbMale;
    QRadioButton *rbFemale;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QComboBox *cbAge;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QComboBox *cbColleage;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QGroupBox *gbInteresting;
    QGridLayout *gridLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btnOK;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCancel;
    QButtonGroup *sexBtnGroup;

    void setupUi(QDialog *AddStudentClass)
    {
        if (AddStudentClass->objectName().isEmpty())
            AddStudentClass->setObjectName(QString::fromUtf8("AddStudentClass"));
        AddStudentClass->resize(350, 450);
        verticalLayout = new QVBoxLayout(AddStudentClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(AddStudentClass);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(AddStudentClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        leName = new QLineEdit(AddStudentClass);
        leName->setObjectName(QString::fromUtf8("leName"));
        leName->setClearButtonEnabled(true);

        horizontalLayout->addWidget(leName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(AddStudentClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        leId = new QLineEdit(AddStudentClass);
        leId->setObjectName(QString::fromUtf8("leId"));
        leId->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(leId);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(AddStudentClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        rbMale = new QRadioButton(AddStudentClass);
        sexBtnGroup = new QButtonGroup(AddStudentClass);
        sexBtnGroup->setObjectName(QString::fromUtf8("sexBtnGroup"));
        sexBtnGroup->setExclusive(true);
        sexBtnGroup->addButton(rbMale);
        rbMale->setObjectName(QString::fromUtf8("rbMale"));

        horizontalLayout_3->addWidget(rbMale);

        rbFemale = new QRadioButton(AddStudentClass);
        sexBtnGroup->addButton(rbFemale);
        rbFemale->setObjectName(QString::fromUtf8("rbFemale"));

        horizontalLayout_3->addWidget(rbFemale);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 4);
        horizontalLayout_3->setStretch(2, 4);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(AddStudentClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        cbAge = new QComboBox(AddStudentClass);
        cbAge->addItem(QString());
        cbAge->addItem(QString());
        cbAge->addItem(QString());
        cbAge->addItem(QString());
        cbAge->addItem(QString());
        cbAge->addItem(QString());
        cbAge->setObjectName(QString::fromUtf8("cbAge"));

        horizontalLayout_4->addWidget(cbAge);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(AddStudentClass);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_5->addWidget(label_7);

        cbColleage = new QComboBox(AddStudentClass);
        cbColleage->addItem(QString());
        cbColleage->addItem(QString());
        cbColleage->addItem(QString());
        cbColleage->addItem(QString());
        cbColleage->setObjectName(QString::fromUtf8("cbColleage"));

        horizontalLayout_5->addWidget(cbColleage);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(AddStudentClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        gbInteresting = new QGroupBox(AddStudentClass);
        gbInteresting->setObjectName(QString::fromUtf8("gbInteresting"));
        sizePolicy.setHeightForWidth(gbInteresting->sizePolicy().hasHeightForWidth());
        gbInteresting->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(gbInteresting);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkBox = new QCheckBox(gbInteresting);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout->addWidget(checkBox, 0, 0, 1, 1);

        checkBox_2 = new QCheckBox(gbInteresting);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        gridLayout->addWidget(checkBox_2, 0, 1, 1, 1);

        checkBox_3 = new QCheckBox(gbInteresting);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        gridLayout->addWidget(checkBox_3, 1, 0, 1, 1);

        checkBox_4 = new QCheckBox(gbInteresting);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        gridLayout->addWidget(checkBox_4, 1, 1, 1, 1);


        horizontalLayout_6->addWidget(gbInteresting);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        btnOK = new QPushButton(AddStudentClass);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));

        horizontalLayout_7->addWidget(btnOK);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        btnCancel = new QPushButton(AddStudentClass);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout_7->addWidget(btnCancel);

        horizontalLayout_7->setStretch(0, 3);
        horizontalLayout_7->setStretch(1, 3);
        horizontalLayout_7->setStretch(2, 3);

        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(AddStudentClass);

        QMetaObject::connectSlotsByName(AddStudentClass);
    } // setupUi

    void retranslateUi(QDialog *AddStudentClass)
    {
        AddStudentClass->setWindowTitle(QApplication::translate("AddStudentClass", "AddStudent", nullptr));
        label->setText(QApplication::translate("AddStudentClass", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        label_2->setText(QApplication::translate("AddStudentClass", "\345\247\223\345\220\215\357\274\232", nullptr));
        leName->setPlaceholderText(QApplication::translate("AddStudentClass", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215", nullptr));
        label_3->setText(QApplication::translate("AddStudentClass", "\345\255\246\345\217\267\357\274\232", nullptr));
        leId->setPlaceholderText(QApplication::translate("AddStudentClass", "\350\257\267\350\276\223\345\205\245\345\255\246\345\217\267\357\274\210\346\234\200\345\260\2218\344\275\215\357\274\211", nullptr));
        label_4->setText(QApplication::translate("AddStudentClass", "\346\200\247\345\210\253\357\274\232", nullptr));
        rbMale->setText(QApplication::translate("AddStudentClass", "\347\224\267", nullptr));
        rbFemale->setText(QApplication::translate("AddStudentClass", "\345\245\263", nullptr));
        label_6->setText(QApplication::translate("AddStudentClass", "\345\271\264\351\276\204\357\274\232", nullptr));
        cbAge->setItemText(0, QApplication::translate("AddStudentClass", "18", nullptr));
        cbAge->setItemText(1, QApplication::translate("AddStudentClass", "19", nullptr));
        cbAge->setItemText(2, QApplication::translate("AddStudentClass", "20", nullptr));
        cbAge->setItemText(3, QApplication::translate("AddStudentClass", "21", nullptr));
        cbAge->setItemText(4, QApplication::translate("AddStudentClass", "22", nullptr));
        cbAge->setItemText(5, QApplication::translate("AddStudentClass", "23", nullptr));

        label_7->setText(QApplication::translate("AddStudentClass", "\351\231\242\347\263\273\357\274\232", nullptr));
        cbColleage->setItemText(0, QApplication::translate("AddStudentClass", "\350\256\241\347\256\227\346\234\272\345\255\246\351\231\242", nullptr));
        cbColleage->setItemText(1, QApplication::translate("AddStudentClass", "\351\200\232\344\277\241\345\255\246\351\231\242", nullptr));
        cbColleage->setItemText(2, QApplication::translate("AddStudentClass", "\346\263\225\345\255\246\351\231\242", nullptr));
        cbColleage->setItemText(3, QApplication::translate("AddStudentClass", "\350\213\261\350\257\255\347\263\273", nullptr));

        label_5->setText(QApplication::translate("AddStudentClass", "\345\205\264\350\266\243\357\274\232", nullptr));
        checkBox->setText(QApplication::translate("AddStudentClass", "\346\270\270\346\263\263", nullptr));
        checkBox_2->setText(QApplication::translate("AddStudentClass", "\351\252\221\350\275\246", nullptr));
        checkBox_3->setText(QApplication::translate("AddStudentClass", "\347\257\256\347\220\203", nullptr));
        checkBox_4->setText(QApplication::translate("AddStudentClass", "\351\237\263\344\271\220", nullptr));
        btnOK->setText(QApplication::translate("AddStudentClass", "\347\241\256\350\256\244", nullptr));
        btnCancel->setText(QApplication::translate("AddStudentClass", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddStudentClass: public Ui_AddStudentClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENT_H
