#include "FirstCustomListModel.h"
#include <QDebug>
FirstCustomListModel::FirstCustomListModel(QObject *parent)
	: QAbstractItemModel(parent)
{
 //数据初始化
	m_Vector.push_back(QStringLiteral("English"));
	m_Vector.push_back(QStringLiteral("Science"));
	m_Vector.push_back(QStringLiteral("Chinese"));
	m_Vector.push_back(QStringLiteral("Math"));
}

FirstCustomListModel::~FirstCustomListModel()
{
}

 QModelIndex FirstCustomListModel::index(int row, int column, const QModelIndex &parent /*= QModelIndex()*/) const
{
	 qDebug() << "#index#";
	 //创建给定行和列的QModelIndex
	 return createIndex(row, column);
}

 //返回每个QModelIndex的父QModelIndex
 QModelIndex FirstCustomListModel::parent(const QModelIndex &child) const
 {
	 qDebug() << "#parent#";
	 //由于QListView的每个Item没有父QModelIndex,因此返回一个非法的QModelIndex
	 return   QModelIndex();
 }

 //QListView需要显示的行数
int FirstCustomListModel::rowCount(const QModelIndex &parent/* = QModelIndex()*/) const
{	
	qDebug() << "#rowCount#";
	/*如果判断了parent为非法的话，即出现UI无法显示的问题*/
	/*if (!parent.isValid()) {
		return 0;
	}*/
	//即为数组的大小
	return m_Vector.size();
}
//QListView需要显示的列数
int FirstCustomListModel::columnCount(const QModelIndex &parent/* = QModelIndex()*/) const
{
	qDebug() << "#columnCount#";
	/*if (!parent.isValid()) {
		return 0;
	}*/
	//即为数组的大小
	return  1;
}
//QListView的数据（显示模式和可编辑模型）
QVariant FirstCustomListModel::data(const QModelIndex &index, int role /*= Qt::DisplayRole*/) const
{
	qDebug() << "#data#";
	if (!index.isValid()) 
	{
		return QVariant();
	}
	//显示状态和编辑状态下，均显示内容
	if (role == Qt::DisplayRole|| role == Qt::EditRole) {
		return QVariant(m_Vector[index.row()]);
	}
	return QVariant();
}
//设置数据，本例设置的是可编辑状态下的数据
bool FirstCustomListModel::setData(const QModelIndex &index, const QVariant &value, int role/* = Qt::EditRole*/)
{
	if (data(index,role)!= value) {	
		if (role== Qt::EditRole) {
			//修改item中数据
			qDebug() << "#setData#";
			m_Vector[index.row()] = value.toString();
			emit dataChanged(index,index,QVector<int>()<< role);
			return true;
		}
	}
	return false;
}

//设置ListView的Item是否可以编辑
Qt::ItemFlags	FirstCustomListModel::flags(const QModelIndex &index) const
{
	qDebug() << "#flags#";
	return Qt::ItemIsEditable|Qt::ItemIsEnabled;
}