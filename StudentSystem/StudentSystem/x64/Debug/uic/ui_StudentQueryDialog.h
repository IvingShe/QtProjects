/********************************************************************************
** Form generated from reading UI file 'StudentQueryDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTQUERYDIALOG_H
#define UI_STUDENTQUERYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_StudentQueryDialog
{
public:

    void setupUi(QDialog *StudentQueryDialog)
    {
        if (StudentQueryDialog->objectName().isEmpty())
            StudentQueryDialog->setObjectName(QString::fromUtf8("StudentQueryDialog"));
        StudentQueryDialog->resize(400, 300);

        retranslateUi(StudentQueryDialog);

        QMetaObject::connectSlotsByName(StudentQueryDialog);
    } // setupUi

    void retranslateUi(QDialog *StudentQueryDialog)
    {
        StudentQueryDialog->setWindowTitle(QApplication::translate("StudentQueryDialog", "StudentQueryDialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentQueryDialog: public Ui_StudentQueryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTQUERYDIALOG_H
