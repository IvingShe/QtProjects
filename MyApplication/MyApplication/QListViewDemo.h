#pragma once

#include <QMainWindow>
#include "ui_QListViewDemo.h"
#include "FirstCustomListModel.h"
/*
*自定义QListView的Model(继承于QAbstractItemModel)
* 实现简单的显示 以及 数据的可编辑器
*/
class QListViewDemo : public QMainWindow
{
	Q_OBJECT

public:
	QListViewDemo(QWidget *parent = nullptr);
	~QListViewDemo();

private:
	Ui::QListViewDemoClass ui;
	FirstCustomListModel* pModel = Q_NULLPTR;
};
