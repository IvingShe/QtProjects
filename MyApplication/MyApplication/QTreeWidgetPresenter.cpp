#include "QTreeWidgetPresenter.h"
#include<QDebug>

	
QTreeWidgetPresenter::QTreeWidgetPresenter(QObject *parent, QTreeWidget* treeWidget) : QObject(parent),m_pTreeWidget(treeWidget)
{
	init();
}

QTreeWidgetPresenter::~QTreeWidgetPresenter()
{
}

//��ʼ��
void QTreeWidgetPresenter::init()
{
	qDebug() << "#init#";
	QString mvcLabel = u8"MVC ���ʹ��ʾ��";
	QTreeWidgetItem* topItem =addTopItem(mvcLabel, TopItemType::MVC);

	QString listLabel = u8"QListView��ʹ��";
	addChildItem(topItem, listLabel,1);

	// it doesn't work.
   //bool flag = connect(m_pTreeWidget,SIGNAL(itemClicked(QTreeWidgetItem *item, int column)),this,SLOT(onItemDoubleClicked(QTreeWidgetItem *item, int column)));
	//it works 
	bool flag = connect(m_pTreeWidget, SIGNAL(itemClicked(QTreeWidgetItem *, int )), this, SLOT(onItemDoubleClicked(QTreeWidgetItem *, int )));
	//it works
   //bool flag = connect(m_pTreeWidget, &QTreeWidget::itemDoubleClicked, this, &QTreeWidgetPresenter::onItemDoubleClicked);  

   //�ӽڵ�ȫչ��
   m_pTreeWidget->setItemsExpandable(true);
   m_pTreeWidget->expandAll();
}

//���Ӷ���Item
QTreeWidgetItem * QTreeWidgetPresenter::addTopItem(QString& name, TopItemType dataRole)
{
	QStringList labs;
	labs << name;
	int type = 0;
	QTreeWidgetItem *pItem = new QTreeWidgetItem(labs, type);
	pItem->setData(0,Qt::UserRole+1, dataRole);
	m_pTreeWidget->addTopLevelItem(pItem);
	return pItem;	
}

//������Item
void  QTreeWidgetPresenter::addChildItem(QTreeWidgetItem *parentItem, QString& name, int dataRole)
{
	QStringList labels;
	labels << name;
	int type = 0;
	QTreeWidgetItem *child = new QTreeWidgetItem(labels, type);

	//��ȡ��Item��dataRole;
	int parentDataRole = parentItem->data(0,Qt::UserRole + 1).toInt();
	//������Item��dataRole;
	int childDataRole = parentDataRole * 10 + dataRole;
	child->setData(0,Qt::UserRole + 1, childDataRole);

	parentItem->addChild(child);
}

void QTreeWidgetPresenter::onItemDoubleClicked(QTreeWidgetItem *item, int column)
{
	qDebug() << "#onItemDoubleClicked#";

	int dataRole = item->data(0, Qt::UserRole + 1).toInt();
	int parentRole = dataRole / 10;
	int childRole= dataRole %10;

	switch (parentRole)
	{
	case  TopItemType::MVC:

		qDebug() << "";
		break;
	default:
		break;
	}

}