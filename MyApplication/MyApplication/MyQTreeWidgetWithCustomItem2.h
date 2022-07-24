#pragma once

#include <QWidget>
#include <QTreeWidgetItem>
#include "ui_MyQTreeWidgetWithCustomItem2.h"
#include "QCellWidget.h"

class MyQTreeWidgetWithCustomItem2 : public QWidget
{
	Q_OBJECT

public:
	MyQTreeWidgetWithCustomItem2(QWidget *parent = Q_NULLPTR);
	~MyQTreeWidgetWithCustomItem2();

private:
	void addItem(const QString& name);

private slots:
	void onDeleteItem(QTreeWidgetItem* item);

private:
	Ui::MyQTreeWidgetWithCustomItem2 ui;
};
