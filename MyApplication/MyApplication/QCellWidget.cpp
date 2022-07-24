#include "QCellWidget.h"

QCellWidget::QCellWidget(QTreeWidgetItem* item, QWidget *parent/* = Q_NULLPTR*/)
	: QWidget(parent), mItem(item)
{
	ui.setupUi(this);
	connect(ui.btnDelete,SIGNAL(clicked()),this,SLOT(onDelete()));
}

QCellWidget::~QCellWidget()
{	
}

void QCellWidget::onDelete()
{
	emit signalDelete(mItem);
}