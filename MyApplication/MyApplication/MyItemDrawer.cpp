#include "MyItemDrawer.h"

MyItemDrawer::MyItemDrawer(QObject *parent)
	: QStyledItemDelegate(parent), 
	mMaleIcon(":/image/image/Male.png"), 
	mFemaleIcon(":/image/image/Female.png"){
	
}

void MyItemDrawer::paint(QPainter *painter, 
	const QStyleOptionViewItem &option,
	const QModelIndex &index) const
{
	//��ͼ������Ҫ������������ͼ����ͻ��ʡ�

	//step1:��ͼ����
	QRect rect = option.rect;
	rect.adjust(2, 2, -2, -2); //��ͼ������СһȦ���Ա������߿�����padding=2��

	//step1.1ѡ��״̬��������Ӱ
	if (option.state&QStyle::State_Selected)
	{
		//painter->setBrush(QColor(0xCC,0xAA, 0xAA));
		painter->setBrush(QColor(00, 00, 00));
		painter->drawRoundedRect(rect, 2, 2);
		painter->setBrush(Qt::NoBrush);
	}

	//step2:��ȡ���ݴ��������
	QString text =index.data(Qt::DisplayRole).toString();
	QString phone = index.data(Qt::UserRole).toString();
	bool isMale = index.data(Qt::UserRole + 1).toBool();

	//step3:�Ա���ʾ
	if (1) {
		QRect dst = rect;
		dst.setRight(rect.left() + 40);
		QRect area(0, 0, 24, 24);
		area.moveCenter(dst.center());
		if (isMale) {
			painter->drawPixmap(area, mMaleIcon);
		}
		else {
			painter->drawPixmap(area, mFemaleIcon);
		}
	}
	//step4:������ʾ
	if (1) {
		QRect dst = rect;
		dst.setLeft(rect.left() + 40);
		dst.setBottom(rect.top() + 20);
		painter->drawText(dst, Qt::AlignLeft | Qt::AlignVCenter, text);
	}
	

	//step5:�ֻ�����ʾ
	if (1) {
		QRect dst = rect;
		dst.setLeft(rect.left() + 40);
		dst.setBottom(rect.top() + 50);
		painter->drawText(dst, Qt::AlignLeft | Qt::AlignVCenter, phone);
	}
}

 QSize  MyItemDrawer::sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) 
 {
	 //��ȡQStyledItemDelegateĬ�ϵ�size
	 QSize size = QStyledItemDelegate::sizeHint(option, index); 
	 //���߶�����Ϊ50px
	 size.setHeight(150); 
	 return size;
}
MyItemDrawer::~MyItemDrawer()
{
}
