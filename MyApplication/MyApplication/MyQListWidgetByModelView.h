#pragma once

#include <QWidget>
#include "ui_MyQListWidgetByModelView.h"
#include <QListWidgetItem>

class MyQListWidgetByModelView : public QWidget
{
	Q_OBJECT

public:
	MyQListWidgetByModelView(QWidget *parent = Q_NULLPTR);
	~MyQListWidgetByModelView();

private slots:
	void onSlotDeleteItem();
	void onSlotItemDBClick(QListWidgetItem*  item);
private:
	Ui::MyQListWidgetByModelView ui;
};
