#pragma once

#include <QWidget>
#include "ui_ComplexCustomWidget.h"
#include <QPushButton>

#include <QLineEdit>
#include <QPlainTextEdit>
class ComplexCustomWidget : public QWidget
{
	Q_OBJECT

public:
	ComplexCustomWidget(QWidget *parent = Q_NULLPTR);
	~ComplexCustomWidget();

private:
	Ui::ComplexCustomWidget ui;

	QPushButton* mBtn;
	QLineEdit* mLineEdit;
	QPlainTextEdit *mPlainText;

};
