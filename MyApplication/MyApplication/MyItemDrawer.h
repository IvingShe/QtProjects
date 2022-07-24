#pragma once

#include <QStyledItemDelegate>
#include <QPainter>

class MyItemDrawer : public QStyledItemDelegate
{
	Q_OBJECT

public:
	MyItemDrawer(QObject *parent);
	~MyItemDrawer();

private:
	//决定该单元格 大小
	virtual  QSize  sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index);
	//决定该单元格如何绘图
	virtual   void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;

private:
	QPixmap mMaleIcon;
	QPixmap mFemaleIcon;
};
