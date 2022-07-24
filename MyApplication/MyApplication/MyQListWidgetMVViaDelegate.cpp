#include "MyQListWidgetMVViaDelegate.h"
#include <QListWidgetItem>
#include "MyItemDrawer.h"

MyQListWidgetMVViaDelegate::MyQListWidgetMVViaDelegate(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	addItem("Jimmy","13738063331",true);
	addItem("Iving", "18867122610", true);
	addItem("LiuHuiMing", "18221392321", false);

	//ʹ�ô���delegate���л���item
	ui.listWidget->setItemDelegate(new MyItemDrawer(ui.listWidget));
}

void MyQListWidgetMVViaDelegate::addItem(QString name, QString phonName, bool isMale) {

	QListWidgetItem* item = new QListWidgetItem();
	item->setData(Qt::DisplayRole, name);
	item->setData(Qt::UserRole,phonName);
	item->setData(Qt::UserRole+1, isMale);

	ui.listWidget->addItem(item);
}



MyQListWidgetMVViaDelegate::~MyQListWidgetMVViaDelegate()
{
}
