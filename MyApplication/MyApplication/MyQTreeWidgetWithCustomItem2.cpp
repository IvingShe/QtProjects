#include "MyQTreeWidgetWithCustomItem2.h"
#include<QTreeWidgetItem>
#include<QTreeWidget>

MyQTreeWidgetWithCustomItem2::MyQTreeWidgetWithCustomItem2(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	addItem(u8"Android");
	addItem(u8"Java");
	addItem(u8"Qt");
	addItem(u8"C++");
	addItem(u8"H5");
	for (int i = 0; i < 5 * 1000; i++) 
	{
		QString tag = "H5：" + QString::number(i);
		addItem(tag);
	}
}

void MyQTreeWidgetWithCustomItem2::addItem(const QString& name)
{
	QTreeWidgetItem* item = new QTreeWidgetItem();
	//Widget列(item的第0列)的Text文件
	item->setText(0, name);
	ui.treeWidget->addTopLevelItem(item);

	//添加自定义Widget列(item的第1列)
	QCellWidget* cellWidget = new QCellWidget(item);
	ui.treeWidget->setItemWidget(item,1,cellWidget);
	//响应自定义控件信号，实现删除操作
	connect(cellWidget, SIGNAL(signalDelete(QTreeWidgetItem*)),this,SLOT(onDeleteItem(QTreeWidgetItem*)));
}


MyQTreeWidgetWithCustomItem2::~MyQTreeWidgetWithCustomItem2()
{	

}

//删除操作函数
void MyQTreeWidgetWithCustomItem2::onDeleteItem(QTreeWidgetItem* item)
{
	delete item;
}

////示例：控制台程序
//int main()
//{
//	while (true)
//	{
//		printf(">");
//		char cmdline[128];
//		gets(cmdline);
//		//处理命令
//	}
//}