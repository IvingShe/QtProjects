#pragma once

#include <QtWidgets/QDialog>
#include "ui_AddStudent.h"
#include <QString>

class AddStudent : public QDialog
{
    Q_OBJECT

public:
    AddStudent(QWidget *parent = Q_NULLPTR);

	void clearUserInformation();

	void saveContent(QString content);

public slots:
	void onOkClick();
	void onCancleClick();

private:
    Ui::AddStudentClass ui;
};
