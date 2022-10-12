#pragma once

#include <QMainWindow>
#include "ui_QDockWidgetDemo.h"

class QDockWidgetDemo : public QMainWindow
{
	Q_OBJECT

public:
	QDockWidgetDemo(QWidget *parent = nullptr);
	~QDockWidgetDemo();

private slots:
	void onSearch();

private:
	Ui::QDockWidgetDemoClass ui;
};
