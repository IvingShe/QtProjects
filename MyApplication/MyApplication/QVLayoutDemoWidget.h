#pragma once

#include <QWidget>
#include "ui_QVLayoutDemoWidget.h"
#include <QPlainTextEdit>
#include <QVBoxLayout>

class QVLayoutDemoWidget : public QWidget
{
	Q_OBJECT

public:
	QVLayoutDemoWidget(QWidget *parent = Q_NULLPTR);
	~QVLayoutDemoWidget();

private:
	Ui::QVLayoutDemoWidget ui;
	QLineEdit* mLineEdit;
	QPlainTextEdit* mPlainTextEdit;
	QVBoxLayout* mVLayout;
};
