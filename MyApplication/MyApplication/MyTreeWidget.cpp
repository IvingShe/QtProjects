#include "MyTreeWidget.h"

MyTreeWidget::MyTreeWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//step1:设置树的列数 及列宽
	ui.treeWidget->setColumnCount(4);
	ui.treeWidget->setColumnWidth(0,100); //第0列宽度
	ui.treeWidget->setColumnWidth(1, 150);

	//step2:设置列表头标签（label）
	QStringList headers; 
	headers.append("name");
	headers.append("last modified time");
	headers.append("type");
	headers.append("size");
	ui.treeWidget->setHeaderLabels(headers);

	QIcon folderIcon(":/image/image/folder.png");
	QIcon fileIcon(":/image/image/file.png");
	//step3:设置子节点
	addItem("test.txt","2012/3/12 23:34:56","text file",20357, fileIcon);
	addItem("Qt.doc", "2012/7/2 13:04:53", "office word file", 3572012, fileIcon);
	addItem("thunder.mp3", "2016/8/2 11:04:24", "vedio file", 1296340, fileIcon);
	//设置一级子节点和二级子节点
	QTreeWidgetItem*  folder= addItem("Picture", "2005/3/2 21:44:23", "vedio file", 1296340, folderIcon);
	addItem("readme.txt", "2005/8/2 11:04:24", "text file", 20357, fileIcon, folder);

}

QTreeWidgetItem* MyTreeWidget::addItem(const QString& name,
	const QString& lastModifiedTime,
	const QString& type,
	int size,
	QIcon icon,
	QTreeWidgetItem*  parent)
{
	QTreeWidgetItem* item = new QTreeWidgetItem();

	//第0列文字和图标
	item->setText(0, name);
	item->setIcon(0, icon);

	//第1、2、3列文字
	item->setText(1, lastModifiedTime);
	item->setText(2, type);
	item->setText(3, QString::number(size));

	if (parent) 
	{
		//子级item
		parent->addChild(item);
	}
	else
	{
		//顶级item;
		ui.treeWidget->addTopLevelItem(item);
	}
	return item;
}

MyTreeWidget::~MyTreeWidget()
{

}
