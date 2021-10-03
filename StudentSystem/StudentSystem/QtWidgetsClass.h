#pragma once

#include <QMainWindow>
#include "ui_QtWidgetsClass.h"
#include "AddStudent.h"
#include "StudentQueryDialog.h"

class QtWidgetsClass : public QMainWindow
{
	Q_OBJECT

public:
	QtWidgetsClass(QWidget *parent = Q_NULLPTR);
	~QtWidgetsClass();

private slots:
    void	showAddStu();
	void qeuryStu();
private:
	Ui::QtWidgetsClass ui;
	AddStudent a;
	StudentQueryDialog  queryDialog;
};
