/********************************************************************************
** Form generated from reading UI file 'QtWidgetsClass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETSCLASS_H
#define UI_QTWIDGETSCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgetsClass
{
public:
    QAction *actionadd_stud;
    QAction *actiondelet_stud;
    QAction *actionedit_stud;
    QAction *actionhelp;
    QAction *actionabout;
    QAction *actionmin;
    QAction *actionmax;
    QAction *actionquery_stud;
    QWidget *centralWidget;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtWidgetsClass)
    {
        if (QtWidgetsClass->objectName().isEmpty())
            QtWidgetsClass->setObjectName(QString::fromUtf8("QtWidgetsClass"));
        QtWidgetsClass->resize(900, 750);
        actionadd_stud = new QAction(QtWidgetsClass);
        actionadd_stud->setObjectName(QString::fromUtf8("actionadd_stud"));
        actiondelet_stud = new QAction(QtWidgetsClass);
        actiondelet_stud->setObjectName(QString::fromUtf8("actiondelet_stud"));
        actionedit_stud = new QAction(QtWidgetsClass);
        actionedit_stud->setObjectName(QString::fromUtf8("actionedit_stud"));
        actionhelp = new QAction(QtWidgetsClass);
        actionhelp->setObjectName(QString::fromUtf8("actionhelp"));
        actionabout = new QAction(QtWidgetsClass);
        actionabout->setObjectName(QString::fromUtf8("actionabout"));
        actionmin = new QAction(QtWidgetsClass);
        actionmin->setObjectName(QString::fromUtf8("actionmin"));
        actionmax = new QAction(QtWidgetsClass);
        actionmax->setObjectName(QString::fromUtf8("actionmax"));
        actionquery_stud = new QAction(QtWidgetsClass);
        actionquery_stud->setObjectName(QString::fromUtf8("actionquery_stud"));
        centralWidget = new QWidget(QtWidgetsClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 110, 281, 16));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
""));
        QtWidgetsClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtWidgetsClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 900, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        QtWidgetsClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtWidgetsClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtWidgetsClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtWidgetsClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtWidgetsClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(actionadd_stud);
        menu->addSeparator();
        menu->addAction(actiondelet_stud);
        menu->addSeparator();
        menu->addAction(actionedit_stud);
        menu->addSeparator();
        menu->addAction(actionquery_stud);
        menu->addSeparator();
        menu_2->addAction(actionhelp);
        menu_2->addAction(actionabout);
        menu_2->addAction(actionmin);
        menu_2->addAction(actionmax);
        menu_2->addSeparator();

        retranslateUi(QtWidgetsClass);

        QMetaObject::connectSlotsByName(QtWidgetsClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgetsClass)
    {
        QtWidgetsClass->setWindowTitle(QApplication::translate("QtWidgetsClass", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        actionadd_stud->setText(QApplication::translate("QtWidgetsClass", "add stud", nullptr));
        actiondelet_stud->setText(QApplication::translate("QtWidgetsClass", "delet stud", nullptr));
        actionedit_stud->setText(QApplication::translate("QtWidgetsClass", "edit stud", nullptr));
        actionhelp->setText(QApplication::translate("QtWidgetsClass", "help", nullptr));
        actionabout->setText(QApplication::translate("QtWidgetsClass", "about", nullptr));
        actionmin->setText(QApplication::translate("QtWidgetsClass", "min", nullptr));
        actionmax->setText(QApplication::translate("QtWidgetsClass", "max", nullptr));
        actionquery_stud->setText(QApplication::translate("QtWidgetsClass", "query stud", nullptr));
        label->setText(QApplication::translate("QtWidgetsClass", "\346\254\242\347\213\254\351\231\242\344\275\277\347\224\250\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        menu->setTitle(QApplication::translate("QtWidgetsClass", "\345\255\246\347\224\237\347\256\241\347\220\206 ", nullptr));
        menu_2->setTitle(QApplication::translate("QtWidgetsClass", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsClass: public Ui_QtWidgetsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETSCLASS_H
