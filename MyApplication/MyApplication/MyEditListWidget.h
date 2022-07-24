#pragma once

#include <QWidget>
#include "ui_MyEditListWidget.h"

class MyEditListWidget : public QWidget
{
	Q_OBJECT

public:
	MyEditListWidget(QWidget *parent = Q_NULLPTR);
	~MyEditListWidget();

private:
	Ui::MyEditListWidget ui;
};
