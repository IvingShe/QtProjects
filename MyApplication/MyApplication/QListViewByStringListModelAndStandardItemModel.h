#pragma once

#include <QMainWindow>
#include "ui_QListViewByStringListModelAndStandardItemModel.h"
#include <QStringListModel> 
#include <QStandardItemModel> 

class QListViewByStringListModelAndStandardItemModel : public QMainWindow
{
	Q_OBJECT

public:
	QListViewByStringListModelAndStandardItemModel(QWidget *parent = nullptr);
	~QListViewByStringListModelAndStandardItemModel();

private:
   /*
   *��ʼ��QStringListModel
  */
	void initQStringListModel();
	/*
    *��ʼ��QStandardItemModel;
   */
	void initQStandardItemModel();

private slots:

  /**
   *QListView����Ӧ���� 
   */
	void onItemDBClicked(const QModelIndex &index);
	/*
	*�л�����Model����Ӧ��
	*/
	void onBtnClicked();

private:
	Ui::QListViewByStringListModelAndStandardItemModelClass ui;
	QStringListModel* m_pStringListModel = nullptr;
	QStandardItemModel* m_pStandardItemModel = Q_NULLPTR;
};
