#include "MyQListWidgetByModelView.h"
#include <QMessageBox>
MyQListWidgetByModelView::MyQListWidgetByModelView(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
   //获取ListWidget 的Model对象
	QAbstractItemModel* model = ui.listWidget->model();
	//插入第0行；
	model->insertRow(0); 
	//获取第0行0列的数据项坐标
	QModelIndex modelIndex = model->index(0, 0); 
	//设置modelIndex的数据data
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
	//获取ListWidget的当前行；
	int row =ui.listWidget->currentRow();
	//获取ListWidget 的Model对象
	QAbstractItemModel* model = ui.listWidget->model();
	//使用model对象删除当前行
	model->removeRow(row); 
}

void MyQListWidgetByModelView::onSlotItemDBClick(QListWidgetItem*  item)
{
	QString text =item->data(Qt::DisplayRole).toString();
	int id =item->data(Qt::UserRole).toInt();
	QString title = QString("Id:%1").arg(id);
	QMessageBox::information(nullptr, title, text);
}