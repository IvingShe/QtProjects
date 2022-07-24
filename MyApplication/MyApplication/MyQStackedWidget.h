#pragma once

#include <QWidget>
#include "ui_MyQStackedWidget.h"
#include "MyQtStackedWidgetPage.h"

class MyQStackedWidget : public QWidget
{
	Q_OBJECT

public:
	MyQStackedWidget(QWidget *parent = Q_NULLPTR);
	~MyQStackedWidget();

private slots:
	void showPage1();
	void showPage2();
	void showPage3();

private:
	Ui::MyQStackedWidget ui;
	MyQtStackedWidgetPage*  mMyQtStackedWidgetPage;
};
