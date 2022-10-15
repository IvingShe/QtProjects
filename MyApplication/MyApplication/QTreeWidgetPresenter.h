#pragma once

#include <QObject>
#include<QTreeWidget>
/**
*QTreeWidget的逻辑处理类
*/
class QTreeWidgetPresenter  : public QObject
{
	Q_OBJECT

public:
	QTreeWidgetPresenter(QObject *parent, QTreeWidget* treeWidget);
	~QTreeWidgetPresenter();

	//顶级Item的类型
	enum TopItemType
	{	
		MVC=1,
		OTHER=2,
	};

private:
	//初始化
	void init();

	//增加顶级Item	
	QTreeWidgetItem * QTreeWidgetPresenter::addTopItem(QString& name, TopItemType dataRole);

	//增加子Item
	void  addChildItem(QTreeWidgetItem *parentItem, QString& name, int dataRole);

private slots:
	//Item双击响应函数
	void onItemDoubleClicked(QTreeWidgetItem *item, int column);

private:
	QTreeWidget*  m_pTreeWidget = nullptr;
};
