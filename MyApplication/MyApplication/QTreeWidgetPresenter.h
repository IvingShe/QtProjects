#pragma once

#include <QObject>
#include<QTreeWidget>

#include "QListViewDemo.h"
#include "QListViewByStringListModelAndStandardItemModel.h"

/**
*QTreeWidget���߼�������
*/
class QTreeWidgetPresenter  : public QObject
{
	Q_OBJECT

public:
	QTreeWidgetPresenter(QObject *parent, QTreeWidget* treeWidget);
	~QTreeWidgetPresenter();

	//����Item������
	enum TopItemType
	{	
		MVC=1,
		OTHER=2,
	};

private:
	//��ʼ��
	void init();

	//���Ӷ���Item	
	QTreeWidgetItem * QTreeWidgetPresenter::addTopItem(QString& name, TopItemType dataRole);

	//������Item
	void  addChildItem(QTreeWidgetItem *parentItem, QString& name, int dataRole);

	//����MVC����Ӧ����
	void handleMVCClicked(int type);

private slots:
	//Item˫����Ӧ����
	void onItemDoubleClicked(QTreeWidgetItem *item, int column);

private:
	QTreeWidget*  m_pTreeWidget = nullptr;
	QListViewDemo* m_pListViewDemo = nullptr;
	QListViewByStringListModelAndStandardItemModel* m_pListViewSimple = Q_NULLPTR;
};
