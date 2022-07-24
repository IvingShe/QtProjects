#pragma once

#include <QWidget>
#include "ui_MyQtTabWidget.h"

class MyQtTabWidget : public QWidget
{
	Q_OBJECT

public:
	MyQtTabWidget(QWidget *parent = Q_NULLPTR);
	~MyQtTabWidget();

private:
	Ui::MyQtTabWidget ui;
};
