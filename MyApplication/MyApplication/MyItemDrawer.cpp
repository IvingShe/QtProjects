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
	//绘图至少需要两个东西：绘图区域和画笔。

	//step1:绘图区域
	QRect rect = option.rect;
	rect.adjust(2, 2, -2, -2); //绘图区域缩小一圈，以便留出边框区域（padding=2）

	//step1.1选中状态，背景阴影
	if (option.state&QStyle::State_Selected)
	{
		//painter->setBrush(QColor(0xCC,0xAA, 0xAA));
		painter->setBrush(QColor(00, 00, 00));
		painter->drawRoundedRect(rect, 2, 2);
		painter->setBrush(Qt::NoBrush);
	}

	//step2:获取数据传入的数据
	QString text =index.data(Qt::DisplayRole).toString();
	QString phone = index.data(Qt::UserRole).toString();
	bool isMale = index.data(Qt::UserRole + 1).toBool();

	//step3:性别显示
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
	//step4:姓名显示
	if (1) {
		QRect dst = rect;
		dst.setLeft(rect.left() + 40);
		dst.setBottom(rect.top() + 20);
		painter->drawText(dst, Qt::AlignLeft | Qt::AlignVCenter, text);
	}
	

	//step5:手机号显示
	if (1) {
		QRect dst = rect;
		dst.setLeft(rect.left() + 40);
		dst.setBottom(rect.top() + 50);
		painter->drawText(dst, Qt::AlignLeft | Qt::AlignVCenter, phone);
	}
}

 QSize  MyItemDrawer::sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) 
 {
	 //获取QStyledItemDelegate默认的size
	 QSize size = QStyledItemDelegate::sizeHint(option, index); 
	 //将高度设置为50px
	 size.setHeight(150); 
	 return size;
}
MyItemDrawer::~MyItemDrawer()
{
}
