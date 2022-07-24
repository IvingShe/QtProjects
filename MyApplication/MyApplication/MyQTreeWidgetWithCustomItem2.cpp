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
		QString tag = "H5��" + QString::number(i);
		addItem(tag);
	}
}

void MyQTreeWidgetWithCustomItem2::addItem(const QString& name)
{
	QTreeWidgetItem* item = new QTreeWidgetItem();
	//Widget��(item�ĵ�0��)��Text�ļ�
	item->setText(0, name);
	ui.treeWidget->addTopLevelItem(item);

	//����Զ���Widget��(item�ĵ�1��)
	QCellWidget* cellWidget = new QCellWidget(item);
	ui.treeWidget->setItemWidget(item,1,cellWidget);
	//��Ӧ�Զ���ؼ��źţ�ʵ��ɾ������
	connect(cellWidget, SIGNAL(signalDelete(QTreeWidgetItem*)),this,SLOT(onDeleteItem(QTreeWidgetItem*)));
}


MyQTreeWidgetWithCustomItem2::~MyQTreeWidgetWithCustomItem2()
{	

}

//ɾ����������
void MyQTreeWidgetWithCustomItem2::onDeleteItem(QTreeWidgetItem* item)
{
	delete item;
}

////ʾ��������̨����
//int main()
//{
//	while (true)
//	{
//		printf(">");
//		char cmdline[128];
//		gets(cmdline);
//		//��������
//	}
//}