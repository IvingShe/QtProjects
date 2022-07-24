#include "MyDrawingPictureWidget.h"
#include <QPainter>

MyDrawingPictureWidget::MyDrawingPictureWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	mPixmap = new QPixmap("./image/westlake.jpeg");
	mPixmap2 = new QPixmap(":/image/image/mascot.jpg");
}

MyDrawingPictureWidget::~MyDrawingPictureWidget()
{
}

void MyDrawingPictureWidget::paintEvent(QPaintEvent *event)
{
	QPainter* painter = new QPainter(this);

	int width = this->width();
	int height = this->height();
	//绘制的目标区域
	QRect target(0,0, width/2, height/2);
	//绘制的源区域
	QRect source(0,0, mPixmap->width(),mPixmap->height());
	painter->drawPixmap(target, *mPixmap, source);


	QRect target2(width / 2, height / 2, width / 2, height / 2);
	QRect source2(0, 0, mPixmap2->width()/2, mPixmap2->height()/2);
	painter->drawPixmap(target2, *mPixmap2, source2);
}