#include "MyQListWidgetByModelView.h"
#include <QMessageBox>
MyQListWidgetByModelView::MyQListWidgetByModelView(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
   //��ȡListWidget ��Model����
	QAbstractItemModel* model = ui.listWidget->model();
	//�����0�У�
	model->insertRow(0); 
	//��ȡ��0��0�е�����������
	QModelIndex modelIndex = model->index(0, 0); 
	//����modelIndex������data
	model->setData(modelIndex, "Book", Qt::DisplayRole);
	model->setData(modelIndex, 10, Qt::UserRole);

	connect(ui.btnDelete, SIGNAL(clicked()), this, SLOT(onSlotDeleteItem()));
	connect(ui.listWidget, SIGNAL(itemDoubleClicked(QListWidgetItem *)), this, SLOT(onSlotItemDBClick(QListWidgetItem*)));
}

MyQListWidgetByModelView::~MyQListWidgetByModelView()
{
}

void MyQListWidgetByModelView::onSlotDeleteItem() 
{
	//��ȡListWidget�ĵ�ǰ�У�
	int row =ui.listWidget->currentRow();
	//��ȡListWidget ��Model����
	QAbstractItemModel* model = ui.listWidget->model();
	//ʹ��model����ɾ����ǰ��
	model->removeRow(row); 
}

void MyQListWidgetByModelView::onSlotItemDBClick(QListWidgetItem*  item)
{
	QString text =item->data(Qt::DisplayRole).toString();
	int id =item->data(Qt::UserRole).toInt();
	QString title = QString("Id:%1").arg(id);
	QMessageBox::information(nullptr, title, text);
}