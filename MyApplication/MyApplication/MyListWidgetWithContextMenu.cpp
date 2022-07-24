#include "MyListWidgetWithContextMenu.h"
#include <QListWidgetItem>
#include <QDebug>

MyListWidgetWithContextMenu::MyListWidgetWithContextMenu(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	QListWidgetItem* item = new QListWidgetItem;
	item->setData(Qt::DisplayRole, u8"姓名"); 	
	ui.listWidget->addItem(item);

	item = new QListWidgetItem;
	item->setData(Qt::DisplayRole, u8"单位");
	ui.listWidget->addItem(item);

	//设置上下文菜单策略
	ui.listWidget->setContextMenuPolicy(Qt::CustomContextMenu);

	connect(ui.listWidget, SIGNAL(customContextMenuRequested(const QPoint &)), this, SLOT(onListWidgetMenu(const QPoint& )));
}

MyListWidgetWithContextMenu::~MyListWidgetWithContextMenu()
{
}

void MyListWidgetWithContextMenu::onListWidgetMenu(const QPoint&)
{
	qDebug() << "MyListWidgetWithContextMenu";
}