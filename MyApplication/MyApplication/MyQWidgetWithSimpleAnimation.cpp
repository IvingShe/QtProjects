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
	//初始化时需要设置颜色，否则绘制为空
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

