#include "MyTreeWidget.h"

MyTreeWidget::MyTreeWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//step1:������������ ���п�
	ui.treeWidget->setColumnCount(4);
	ui.treeWidget->setColumnWidth(0,100); //��0�п��
	ui.treeWidget->setColumnWidth(1, 150);

	//step2:�����б�ͷ��ǩ��label��
	QStringList headers; 
	headers.append("name");
	headers.append("last modified time");
	headers.append("type");
	headers.append("size");
	ui.treeWidget->setHeaderLabels(headers);

	QIcon folderIcon(":/image/image/folder.png");
	QIcon fileIcon(":/image/image/file.png");
	//step3:�����ӽڵ�
	addItem("test.txt","2012/3/12 23:34:56","text file",20357, fileIcon);
	addItem("Qt.doc", "2012/7/2 13:04:53", "office word file", 3572012, fileIcon);
	addItem("thunder.mp3", "2016/8/2 11:04:24", "vedio file", 1296340, fileIcon);
	//����һ���ӽڵ�Ͷ����ӽڵ�
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

	//��0�����ֺ�ͼ��
	item->setText(0, name);
	item->setIcon(0, icon);

	//��1��2��3������
	item->setText(1, lastModifiedTime);
	item->setText(2, type);
	item->setText(3, QString::number(size));

	if (parent) 
	{
		//�Ӽ�item
		parent->addChild(item);
	}
	else
	{
		//����item;
		ui.treeWidget->addTopLevelItem(item);
	}
	return item;
}

MyTreeWidget::~MyTreeWidget()
{

}
