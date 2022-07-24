#pragma once

#include <QWidget>
#include "ui_MyListWidgetWithContextMenu.h"

class MyListWidgetWithContextMenu : public QWidget
{
	Q_OBJECT

public:
	MyListWidgetWithContextMenu(QWidget *parent = Q_NULLPTR);
	~MyListWidgetWithContextMenu();

private slots:
	void onListWidgetMenu(const QPoint& point);

private:
	Ui::MyListWidgetWithContextMenu ui;
};
