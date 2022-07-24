#include "MyTimer.h"
#include<QTime>
#include<QDebug>
MyTimer::MyTimer(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	//������ʱ������
	mTimerId =startTimer(1000);
	mTimerId2 =startTimer(300);
}

MyTimer::~MyTimer()
{

}

//��ʱ ��������
void MyTimer::timerEvent(QTimerEvent *event)
{
	int id = event->timerId();
	//�����ж����ʱ��
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
