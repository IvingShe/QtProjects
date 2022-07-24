#include "MyQTreeWidgetWithCustomItem.h"

#include<QDir>
#include<QDebug>
#include<QCheckBox>

MyQTreeWidgetWithCustomItem::MyQTreeWidgetWithCustomItem(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	ui.treeWidget->setColumnWidth(0,50);
	//获取文件目录
	QDir dir("D:/QtProjects/MyApplication/MyApplication");

	//增加过滤器对文件进行筛选
	QStringList  nameFilter;
	nameFilter << "*.h" << "*.cpp";
	QStringList filteredFiles=dir.entryList(nameFilter);

	for (int index = 0; index < filteredFiles.size(); index++) 
	{
		QString file = filteredFiles.at(index);
		//qDebug() << file;
		QTreeWidgetItem* item = new QTreeWidgetItem();
		item->setText(1, file);
		ui.treeWidget->addTopLevelItem(item);

		QCheckBox* cb = new QCheckBox();
		ui.treeWidget->setItemWidget(item,0, cb);

	}
	connect(ui.btnTest,SIGNAL(clicked()),this, SLOT(onTest()));
}

MyQTreeWidgetWithCustomItem::~MyQTreeWidgetWithCustomItem()
{
}

void MyQTreeWidgetWithCustomItem::onTest() 
{
	int topItemCount = ui.treeWidget->topLevelItemCount();

	for (int i=0;i< topItemCount; i++)
	{
		//获取子Item
		QTreeWidgetItem* item = ui.treeWidget->topLevelItem(i);

		//获取Item的第0列自定义控件；
		QCheckBox* checkbox =(QCheckBox*) ui.treeWidget->itemWidget(item,0);
		if (checkbox->isChecked())
		{			
			QString fileName = item->text(1);
			qDebug() << fileName;
		}
	}
}