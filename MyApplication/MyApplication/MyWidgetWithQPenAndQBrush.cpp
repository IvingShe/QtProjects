#include "MyWidgetWithQPenAndQBrush.h"
#include <QPainter>

MyWidgetWithQPenAndQBrush::MyWidgetWithQPenAndQBrush(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

MyWidgetWithQPenAndQBrush::~MyWidgetWithQPenAndQBrush()
{
}
void MyWidgetWithQPenAndQBrush::paintEvent(QPaintEvent* event)
{
	//step1:获取画笔
	QPainter* painter = new QPainter(this);

	//绘制黑色背景
	QBrush backgroudbrush( QColor(0x00, 0x00, 0x00));
	painter->setBrush(backgroudbrush);
	painter->drawRect(QRect(0, 0, this->width() , this->height() ));

	//step2:设置画笔，即设置图形边界颜色
	QColor red(0xff, 0x00,0x00);
	QPen  pen(red);
	pen.setWidth(3); //边线的宽度
	pen.setStyle(Qt::DashLine);//边线的风格
	painter->setPen(pen);

	//step3: 设QBrush，即设置绘制图形填充色
	QColor yellow(0xff, 0xff, 0x00);
	QBrush brush(yellow);
	brush.setStyle(Qt::CrossPattern); //填充样式为网状
	painter->setBrush(brush);

	//step4：绘制图形
	painter->drawRect(QRect(5, 5, this->width()-10, this->height()-10));
}
