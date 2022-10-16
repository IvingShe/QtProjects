#pragma once

#include <QMainWindow>
#include "ui_QListViewDemo.h"
#include "FirstCustomListModel.h"
/*
*�Զ���QListView��Model(�̳���QAbstractItemModel)
* ʵ�ּ򵥵���ʾ �Լ� ���ݵĿɱ༭��
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
