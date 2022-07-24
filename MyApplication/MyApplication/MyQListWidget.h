#pragma once
#include <QWidget>
#include "ui_MyQListWidget.h"
class MyQListWidget : public QWidget
{
	Q_OBJECT
public:
	MyQListWidget(QWidget *parent = Q_NULLPTR);
	~MyQListWidget();

private slots:
	void onSlotDeleteItem();
	void onSlotChangeViewMode();
	void onSlotDbClick(QListWidgetItem* item);
private:
	Ui::MyQListWidget ui;
};
