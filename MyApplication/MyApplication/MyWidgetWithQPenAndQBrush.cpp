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
	//step1:��ȡ����
	QPainter* painter = new QPainter(this);

	//���ƺ�ɫ����
	QBrush backgroudbrush( QColor(0x00, 0x00, 0x00));
	painter->setBrush(backgroudbrush);
	painter->drawRect(QRect(0, 0, this->width() , this->height() ));

	//step2:���û��ʣ�������ͼ�α߽���ɫ
	QColor red(0xff, 0x00,0x00);
	QPen  pen(red);
	pen.setWidth(3); //���ߵĿ��
	pen.setStyle(Qt::DashLine);//���ߵķ��
	painter->setPen(pen);

	//step3: ��QBrush�������û���ͼ�����ɫ
	QColor yellow(0xff, 0xff, 0x00);
	QBrush brush(yellow);
	brush.setStyle(Qt::CrossPattern); //�����ʽΪ��״
	painter->setBrush(brush);

	//step4������ͼ��
	painter->drawRect(QRect(5, 5, this->width()-10, this->height()-10));
}
