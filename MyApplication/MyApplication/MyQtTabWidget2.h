#pragma once

#include <QWidget>
#include "ui_MyQtTabWidget2.h"

class MyQtTabWidget2 : public QWidget
{
	Q_OBJECT

public:
	MyQtTabWidget2(QWidget *parent = Q_NULLPTR);
	~MyQtTabWidget2();

private slots:
	void  OnSlotAddTab(); 
	void OnSlotDeleteTab();

private:
	Ui::MyQtTabWidget2 ui;
};
