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
	//�����õ�Ԫ�� ��С
	virtual  QSize  sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index);
	//�����õ�Ԫ����λ�ͼ
	virtual   void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;

private:
	QPixmap mMaleIcon;
	QPixmap mFemaleIcon;
};
