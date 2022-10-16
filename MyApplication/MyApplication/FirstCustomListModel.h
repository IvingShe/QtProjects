#pragma once

#include <QAbstractItemModel>

class FirstCustomListModel  : public QAbstractItemModel
{
	Q_OBJECT

public:

	FirstCustomListModel(QObject *parent);

	~FirstCustomListModel();

protected:
	/*virtual QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex());
	virtual int rowCount(const QModelIndex &parent = QModelIndex()) ;
	virtual int columnCount(const QModelIndex &parent = QModelIndex()) ;
	virtual QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) ;
	virtual QModelIndex parent(const QModelIndex &child) ;*/
};
