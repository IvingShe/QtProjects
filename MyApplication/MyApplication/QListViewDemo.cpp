#include "QListViewDemo.h"

QListViewDemo::QListViewDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//����Model��ʹ��Model
	pModel = new FirstCustomListModel(nullptr);
	ui.listView->setModel(pModel);
}
QListViewDemo::~QListViewDemo()
{
}
