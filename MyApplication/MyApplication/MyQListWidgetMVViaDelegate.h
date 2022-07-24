#pragma once

#include <QWidget>
#include "ui_MyQListWidgetMVViaDelegate.h"

class MyQListWidgetMVViaDelegate : public QWidget
{
	Q_OBJECT

public:
	MyQListWidgetMVViaDelegate(QWidget *parent = Q_NULLPTR);
	~MyQListWidgetMVViaDelegate();

private:
	void addItem(QString name, QString phonName,bool isMale);
	

private:
	Ui::MyQListWidgetMVViaDelegate ui;
};
