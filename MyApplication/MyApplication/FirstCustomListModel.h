#pragma once

#include <QAbstractItemModel>
/**
*�Զ���QAbstractItemModel:ʵ�ּ򵥵���ʾ �Լ� �������ݵĿɱ༭
*/
class FirstCustomListModel  : public QAbstractItemModel
{
	Q_OBJECT
public:
	FirstCustomListModel(QObject *parent);
	~FirstCustomListModel();
	/*
	*������5������Ϊ���麯��������ʵ�֣�
	*/
	virtual QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const;
	//QListView��Ҫ��ʾ������
	virtual int rowCount(const QModelIndex &parent = QModelIndex()) const;
	//QListView��Ҫ��ʾ������
	virtual int columnCount(const QModelIndex &parent = QModelIndex()) const;
	//QListView�����ݣ���ʾģʽ�Ϳɱ༭ģ�ͣ�
	virtual QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
	//����ÿ��QModelIndex�ĸ�QModelIndex
	virtual QModelIndex parent(const QModelIndex &child) const;
	/*
	*������2����������ʵ�� �ɱ༭����
	*/
	virtual Qt::ItemFlags	flags(const QModelIndex &index) const;
	//�������ݣ��������õ��ǿɱ༭״̬�µ�����
	bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole);
private:
	//������ʾ�ĸ�ֵ���ݼ���
	QVector<QString> m_Vector;
};
