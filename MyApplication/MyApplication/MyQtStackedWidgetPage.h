#pragma once

#include <QWidget>
#include "ui_MyQtStackedWidgetPage.h"

class MyQtStackedWidgetPage : public QWidget
{
	Q_OBJECT

public:
	MyQtStackedWidgetPage(QWidget *parent = Q_NULLPTR);
	~MyQtStackedWidgetPage();

private:
	Ui::MyQtStackedWidgetPage ui;
};
