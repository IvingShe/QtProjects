#include "QTreeWidgetPresenter.h"
#include<QDebug>

	
QTreeWidgetPresenter::QTreeWidgetPresenter(QObject *parent, QTreeWidget* treeWidget) : QObject(parent),m_pTreeWidget(treeWidget)
{
	init();
}

QTreeWidgetPresenter::~QTreeWidgetPresenter()
{
}

//初始化
void QTreeWidgetPresenter::init()
{
	qDebug() << "#init#";
	QString mvcLabel = u8"MVC 框架使用示例";
	QTreeWidgetItem* topItem =addTopItem(mvcLabel, TopItemType::MVC);

	QString listLabel = u8"QListView的使用";
	addChildItem(topItem, listLabel,1);

	// it doesn't work.
   //bool flag = connect(m_pTreeWidget,SIGNAL(itemClicked(QTreeWidgetItem *item, int column)),this,SLOT(onItemDoubleClicked(QTreeWidgetItem *item, int column)));
	//it works 
	bool flag = connect(m_pTreeWidget, SIGNAL(itemClicked(QTreeWidgetItem *, int )), this, SLOT(onItemDoubleClicked(QTreeWidgetItem *, int )));
	//it works
   //bool flag = connect(m_pTreeWidget, &QTreeWidget::itemDoubleClicked, this, &QTreeWidgetPresenter::onItemDoubleClicked);  

   //子节点全展开
   m_pTreeWidget->setItemsExpandable(true);
   m_pTreeWidget->expandAll();
}

//增加顶级Item
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

//增加子Item
void  QTreeWidgetPresenter::addChildItem(QTreeWidgetItem *parentItem, QString& name, int dataRole)
{
	QStringList labels;
	labels << name;
	int type = 0;
	QTreeWidgetItem *child = new QTreeWidgetItem(labels, type);

	//获取父Item的dataRole;
	int parentDataRole = parentItem->data(0,Qt::UserRole + 1).toInt();
	//设置子Item的dataRole;
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