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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StudentQueryDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *cb_selection;
    QLineEdit *le_content;
    QPushButton *btn_search;
    QTableView *tableView;

    void setupUi(QDialog *StudentQueryDialog)
    {
        if (StudentQueryDialog->objectName().isEmpty())
            StudentQueryDialog->setObjectName(QString::fromUtf8("StudentQueryDialog"));
        StudentQueryDialog->resize(600, 451);
        verticalLayout = new QVBoxLayout(StudentQueryDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cb_selection = new QComboBox(StudentQueryDialog);
        cb_selection->addItem(QString());
        cb_selection->addItem(QString());
        cb_selection->addItem(QString());
        cb_selection->addItem(QString());
        cb_selection->setObjectName(QString::fromUtf8("cb_selection"));

        horizontalLayout->addWidget(cb_selection);

        le_content = new QLineEdit(StudentQueryDialog);
        le_content->setObjectName(QString::fromUtf8("le_content"));

        horizontalLayout->addWidget(le_content);

        btn_search = new QPushButton(StudentQueryDialog);
        btn_search->setObjectName(QString::fromUtf8("btn_search"));

        horizontalLayout->addWidget(btn_search);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(StudentQueryDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);


        retranslateUi(StudentQueryDialog);

        QMetaObject::connectSlotsByName(StudentQueryDialog);
    } // setupUi

    void retranslateUi(QDialog *StudentQueryDialog)
    {
        StudentQueryDialog->setWindowTitle(QApplication::translate("StudentQueryDialog", "\345\255\246\347\224\237\346\237\245\350\257\242", nullptr));
        cb_selection->setItemText(0, QApplication::translate("StudentQueryDialog", "\346\237\245\350\257\242\346\226\271\345\274\217 ", nullptr));
        cb_selection->setItemText(1, QApplication::translate("StudentQueryDialog", "\346\214\211\345\247\223\345\220\215\346\237\245\350\257\242", nullptr));
        cb_selection->setItemText(2, QApplication::translate("StudentQueryDialog", "\346\214\211\345\255\246\345\217\267\346\237\245\350\257\242", nullptr));
        cb_selection->setItemText(3, QApplication::translate("StudentQueryDialog", "\346\214\211\351\231\242\347\263\273\346\237\245\350\257\242", nullptr));

        btn_search->setText(QApplication::translate("StudentQueryDialog", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentQueryDialog: public Ui_StudentQueryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTQUERYDIALOG_H
