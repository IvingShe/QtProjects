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
   *初始化QStringListModel
  */
	void initQStringListModel();
	/*
    *初始化QStandardItemModel;
   */
	void initQStandardItemModel();

private slots:

  /**
   *QListView的响应函数 
   */
	void onItemDBClicked(const QModelIndex &index);
	/*
	*切换两种Model的响应函
	*/
	void onBtnClicked();

private:
	Ui::QListViewByStringListModelAndStandardItemModelClass ui;
	QStringListModel* m_pStringListModel = nullptr;
	QStandardItemModel* m_pStandardItemModel = Q_NULLPTR;
};
