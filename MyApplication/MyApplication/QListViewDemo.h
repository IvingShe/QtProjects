#pragma once

#include <QMainWindow>
#include "ui_QListViewDemo.h"

class QListViewDemo : public QMainWindow
{
	Q_OBJECT

public:
	QListViewDemo(QWidget *parent = nullptr);
	~QListViewDemo();

private:
	Ui::QListViewDemoClass ui;
};
