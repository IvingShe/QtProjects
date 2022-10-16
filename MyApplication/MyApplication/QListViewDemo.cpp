#include "QListViewDemo.h"

QListViewDemo::QListViewDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//创建Model并使用Model
	pModel = new FirstCustomListModel(nullptr);
	ui.listView->setModel(pModel);
}
QListViewDemo::~QListViewDemo()
{
}
