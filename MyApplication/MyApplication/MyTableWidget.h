#pragma once

#include <QWidget>
#include "ui_MyTableWidget.h"

class MyTableWidget : public QWidget
{
	Q_OBJECT

public:
	MyTableWidget(QWidget *parent = Q_NULLPTR);
	~MyTableWidget();

private:
	void addData(const QString& id,const QString& name, int score);

private:
	Ui::MyTableWidget ui;
};
