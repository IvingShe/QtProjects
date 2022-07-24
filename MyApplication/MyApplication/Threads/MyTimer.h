#pragma once

#include <QWidget>
#include "ui_MyTimer.h"

class MyTimer : public QWidget
{
	Q_OBJECT

public:
	MyTimer(QWidget *parent = Q_NULLPTR);
	~MyTimer();

protected:
	virtual void	timerEvent(QTimerEvent *event);

private:
	Ui::MyTimer ui;
	/*const*/ int mTimerId;
	int  mTimerId2;
};
