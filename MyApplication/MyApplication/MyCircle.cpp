#include "MyCircle.h"
#include <QPainter>

MyCircle::MyCircle(QWidget *parent)
	: QFrame(parent)
{
	//ui.setupUi(this);
}

MyCircle::~MyCircle()
{
}

void MyCircle::paintEvent(QPaintEvent * event)
{
	QPainter* painter = new QPainter(this);
	//painter->setBrush(QBrush(QColor(0xff, 0x00, 0x00)));
	painter->setBrush(QBrush(QColor(0x00, 0x00, 0x00)));
	painter->drawEllipse(QPoint(100,100), 100,100);
}

