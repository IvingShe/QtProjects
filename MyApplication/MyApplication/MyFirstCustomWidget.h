#pragma once

#include <QWidget>
#include "ui_MyFirstCustomWidget.h"
#include <QPushButton> 

class MyFirstCustomWidget : public QWidget
{
	Q_OBJECT

public:
	MyFirstCustomWidget(QWidget *parent = Q_NULLPTR);
	~MyFirstCustomWidget();

private:
	Ui::MyFirstCustomWidget ui;
	QPushButton* m_Btn;
};
