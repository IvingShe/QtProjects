#pragma once

#include <QWidget>
#include <QTimer>
#include "ui_MyQWidgetWithSimpleAnimation.h"

class MyQWidgetWithSimpleAnimation : public QWidget
{
	Q_OBJECT

public:
	MyQWidgetWithSimpleAnimation(QWidget *parent = Q_NULLPTR);
	~MyQWidgetWithSimpleAnimation();
	virtual void paintEvent(QPaintEvent *pe);

private:
	Ui::MyQWidgetWithSimpleAnimation ui;
	QTimer *mQTimer;
	int timeCount;
};
