#pragma once

#include <QObject>
#include<QTreeWidget>
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

private slots:
	//Item˫����Ӧ����
	void onItemDoubleClicked(QTreeWidgetItem *item, int column);

private:
	QTreeWidget*  m_pTreeWidget = nullptr;
};
