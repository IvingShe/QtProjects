#include "FirstCustomListModel.h"

FirstCustomListModel::FirstCustomListModel(QObject *parent)
	: QAbstractItemModel(parent)
{}

FirstCustomListModel::~FirstCustomListModel()
{}

// QModelIndex FirstCustomListModel::index(int row, int column, const QModelIndex &parent /*= QModelIndex()*/)
//{
//}
//
//int FirstCustomListModel::rowCount(const QModelIndex &parent/* = QModelIndex()*/)
//{
//}
//
//int FirstCustomListModel::columnCount(const QModelIndex &parent/* = QModelIndex()*/)
//{
//}
//
//QVariant FirstCustomListModel::data(const QModelIndex &index, int role /*= Qt::DisplayRole*/)
//{
//}
//
//QModelIndex FirstCustomListModel::parent(const QModelIndex &child)
//{
//}