#pragma once

#include <QWidget>
#include <QTreeWidgetItem>

#include "ui_QCellWidget.h"

class QCellWidget : public QWidget
{
	Q_OBJECT

public:
	QCellWidget(QTreeWidgetItem* item,QWidget *parent = Q_NULLPTR);
	~QCellWidget();

signals:
	//����������ͷ��ź�
	void signalDelete(QTreeWidgetItem* item);

private slots:
	void onDelete();

private:
	Ui::QCellWidget ui;
	QTreeWidgetItem* mItem;
};
