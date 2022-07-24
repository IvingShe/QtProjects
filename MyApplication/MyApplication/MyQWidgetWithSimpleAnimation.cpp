#include "MyQWidgetWithSimpleAnimation.h"

#include <QPainter>

MyQWidgetWithSimpleAnimation::MyQWidgetWithSimpleAnimation(QWidget *parent)
	: QWidget(parent), timeCount(0)
{
	ui.setupUi(this);
	mQTimer = new QTimer(this);
	connect(mQTimer, SIGNAL(timeout()), this, SLOT(update()));	
	mQTimer->start(300);
	
}

MyQWidgetWithSimpleAnimation::~MyQWidgetWithSimpleAnimation()
{
}

void MyQWidgetWithSimpleAnimation::paintEvent(QPaintEvent *pe) {

	QPainter *painter = new QPainter(this);
	painter->setPen(Qt::NoPen);
	//��ʼ��ʱ��Ҫ������ɫ���������Ϊ��
	QBrush	brush(QColor(0xff, 00, 00));
	if (timeCount%2==0)
	{
		brush.setColor(QColor(0xff, 00, 00));
	}
	else 
	{
		brush.setColor(QColor(0x77, 0x77, 0x77));
	}
	timeCount++;

	painter->setBrush(brush); 
	painter->drawEllipse(100,100, 50,50);
}

