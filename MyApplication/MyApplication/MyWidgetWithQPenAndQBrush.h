#pragma once

#include <QWidget>
#include "ui_MyWidgetWithQPenAndQBrush.h"

class MyWidgetWithQPenAndQBrush : public QWidget
{
	Q_OBJECT

public:
	MyWidgetWithQPenAndQBrush(QWidget *parent = Q_NULLPTR);
	~MyWidgetWithQPenAndQBrush();
protected:
	virtual void paintEvent(QPaintEvent* event);
private:
	Ui::MyWidgetWithQPenAndQBrush ui;
};
