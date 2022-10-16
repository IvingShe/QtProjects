#include "FirstCustomListModel.h"
#include <QDebug>
FirstCustomListModel::FirstCustomListModel(QObject *parent)
	: QAbstractItemModel(parent)
{
 //���ݳ�ʼ��
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
	 //���������к��е�QModelIndex
	 return createIndex(row, column);
}

 //����ÿ��QModelIndex�ĸ�QModelIndex
 QModelIndex FirstCustomListModel::parent(const QModelIndex &child) const
 {
	 qDebug() << "#parent#";
	 //����QListView��ÿ��Itemû�и�QModelIndex,��˷���һ���Ƿ���QModelIndex
	 return   QModelIndex();
 }

 //QListView��Ҫ��ʾ������
int FirstCustomListModel::rowCount(const QModelIndex &parent/* = QModelIndex()*/) const
{	
	qDebug() << "#rowCount#";
	/*����ж���parentΪ�Ƿ��Ļ���������UI�޷���ʾ������*/
	/*if (!parent.isValid()) {
		return 0;
	}*/
	//��Ϊ����Ĵ�С
	return m_Vector.size();
}
//QListView��Ҫ��ʾ������
int FirstCustomListModel::columnCount(const QModelIndex &parent/* = QModelIndex()*/) const
{
	qDebug() << "#columnCount#";
	/*if (!parent.isValid()) {
		return 0;
	}*/
	//��Ϊ����Ĵ�С
	return  1;
}
//QListView�����ݣ���ʾģʽ�Ϳɱ༭ģ�ͣ�
QVariant FirstCustomListModel::data(const QModelIndex &index, int role /*= Qt::DisplayRole*/) const
{
	qDebug() << "#data#";
	if (!index.isValid()) 
	{
		return QVariant();
	}
	//��ʾ״̬�ͱ༭״̬�£�����ʾ����
	if (role == Qt::DisplayRole|| role == Qt::EditRole) {
		return QVariant(m_Vector[index.row()]);
	}
	return QVariant();
}
//�������ݣ��������õ��ǿɱ༭״̬�µ�����
bool FirstCustomListModel::setData(const QModelIndex &index, const QVariant &value, int role/* = Qt::EditRole*/)
{
	if (data(index,role)!= value) {	
		if (role== Qt::EditRole) {
			//�޸�item������
			qDebug() << "#setData#";
			m_Vector[index.row()] = value.toString();
			emit dataChanged(index,index,QVector<int>()<< role);
			return true;
		}
	}
	return false;
}

//����ListView��Item�Ƿ���Ա༭
Qt::ItemFlags	FirstCustomListModel::flags(const QModelIndex &index) const
{
	qDebug() << "#flags#";
	return Qt::ItemIsEditable|Qt::ItemIsEnabled;
}