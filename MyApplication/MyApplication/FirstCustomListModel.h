#pragma once

#include <QAbstractItemModel>
/**
*自定义QAbstractItemModel:实现简单的显示 以及 数据内容的可编辑
*/
class FirstCustomListModel  : public QAbstractItemModel
{
	Q_OBJECT
public:
	FirstCustomListModel(QObject *parent);
	~FirstCustomListModel();
	/*
	*以下这5个函数为纯虚函数，必须实现，
	*/
	virtual QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const;
	//QListView需要显示的行数
	virtual int rowCount(const QModelIndex &parent = QModelIndex()) const;
	//QListView需要显示的列数
	virtual int columnCount(const QModelIndex &parent = QModelIndex()) const;
	//QListView的数据（显示模式和可编辑模型）
	virtual QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
	//返回每个QModelIndex的父QModelIndex
	virtual QModelIndex parent(const QModelIndex &child) const;
	/*
	*以下这2个函数用于实现 可编辑功能
	*/
	virtual Qt::ItemFlags	flags(const QModelIndex &index) const;
	//设置数据，本例设置的是可编辑状态下的数据
	bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole);
private:
	//用于显示的赋值数据集合
	QVector<QString> m_Vector;
};
