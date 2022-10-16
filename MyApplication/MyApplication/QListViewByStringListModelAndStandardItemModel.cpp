#include "QListViewByStringListModelAndStandardItemModel.h"
#include<QDebug>
#include<QMessageBox>
QListViewByStringListModelAndStandardItemModel::QListViewByStringListModelAndStandardItemModel(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	initQStringListModel();
	bool flag = connect(ui.btnStringList,SIGNAL(clicked()),this, SLOT(onBtnClicked()));
	flag  =connect(ui.btnStandardItem, SIGNAL(clicked()), this, SLOT(onBtnClicked()));
	flag = connect(ui.listView,SIGNAL(doubleClicked(const QModelIndex&)),this,SLOT(onItemDBClicked(const QModelIndex &)));
}

QListViewByStringListModelAndStandardItemModel::~QListViewByStringListModelAndStandardItemModel()
{

}

void QListViewByStringListModelAndStandardItemModel::initQStringListModel()
{
	//QStringListModel;
	QStringList stringList;
	stringList << "A" << "B" << "C";
	stringList << u8"����" << u8"��ѧ" << u8"Ӣ��";
	m_pStringListModel = new QStringListModel(stringList);
	ui.listView->setModel(m_pStringListModel);
}


void QListViewByStringListModelAndStandardItemModel::initQStandardItemModel()
{
	//QStandardItemModel;
	m_pStandardItemModel = new QStandardItemModel();
	QStringList strLlist;
	strLlist << "QStandardItemModel 1" << "QStandardItemModel 2" << "QStandardItemModel 3";

	int size = strLlist.size();
	for (int i = 0; i < size; i++)
	{
		QString string = strLlist.value(i);
		QStandardItem* item = new QStandardItem(string);
		m_pStandardItemModel->appendRow(item);
	}
	ui.listView->setModel(m_pStandardItemModel);
}


void QListViewByStringListModelAndStandardItemModel::onBtnClicked()
{
	if (sender()==ui.btnStandardItem) {
		initQStandardItemModel();
	}
	else {
		initQStringListModel();
	}

}
void QListViewByStringListModelAndStandardItemModel::onItemDBClicked(const QModelIndex &index)
{
	qDebug() << "#onItemDBClicked#";
	QMessageBox msgBox;//��򵥵ĶԻ�������ʲôҲû��
	QString str = "#onItemDBClicked#";
	msgBox.setText(str);
	msgBox.exec();
}