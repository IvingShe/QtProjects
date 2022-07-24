#pragma once

#include <QWidget>
#include "ui_MyQTreeWidgetWithCustomItem.h"

class MyQTreeWidgetWithCustomItem : public QWidget
{
	Q_OBJECT

public:
	MyQTreeWidgetWithCustomItem(QWidget *parent = Q_NULLPTR);
	~MyQTreeWidgetWithCustomItem();

private slots:
	void onTest();

private:
	Ui::MyQTreeWidgetWithCustomItem ui;
};
