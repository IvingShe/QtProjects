#include "QtWidgetsWithMouse.h"
#include <QPainter>
#include <QMouseEvent>
QtWidgetsWithMouse::QtWidgetsWithMouse(QWidget *parent)
	: QWidget(parent), mPressed(false)
{
	ui.setupUi(this);
}

QtWidgetsWithMouse::~QtWidgetsWithMouse()
{
}
void QtWidgetsWithMouse::paintEvent(QPaintEvent *event)
{
	QPainter *  painter = new QPainter(this);

	//step: »æÖÆ±³¾°£¨ºÚÉ«£©
	int width = this->width();
	int height = this->height();
	QBrush brush(QColor(00,00,00));
	painter->setBrush(brush);
	QRect bgRect(0,0, width, height);
	painter->drawRect(bgRect);


	if (mPressed)
	{
		QPen pen(QColor(0xff,0x00,0x00));
		painter->setPen(pen);
		for (int i=0;i< mPointVector.length()-1;i++)
		{
			QLine  line(mPointVector.at(i), mPointVector.at(i+1));
			painter->drawLine(line);
		}
	}

}

void QtWidgetsWithMouse::mousePressEvent(QMouseEvent *event)
{
	mPointVector.clear();
	mPressed = true;
}

void QtWidgetsWithMouse::mouseReleaseEvent(QMouseEvent *event)
{
	mPressed = false;
}

void QtWidgetsWithMouse::mouseMoveEvent(QMouseEvent *event)
{

	const int x =event->x();
	const int y = event->y();
	QPoint point(x, y);
	mPointVector.append(point);

	update();
}

void QtWidgetsWithMouse::mouseDoubleClickEvent(QMouseEvent *event)
{

}