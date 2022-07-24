#include "MyTimer.h"
#include<QTime>
#include<QDebug>
MyTimer::MyTimer(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	//启动定时器；不
	mTimerId =startTimer(1000);
	mTimerId2 =startTimer(300);
}

MyTimer::~MyTimer()
{

}

//定时 器处理函数
void MyTimer::timerEvent(QTimerEvent *event)
{
	int id = event->timerId();
	//可以有多个定时器
	if (mTimerId== id)
	{
		QTime time = QTime::currentTime();
		QString text = time.toString("HH:mm:ss");
		ui.lbDisplay->setText(text);

	}
	else if (mTimerId2==id);
	{
		qDebug() << "mTimerId2:"<< id;
	}
}
