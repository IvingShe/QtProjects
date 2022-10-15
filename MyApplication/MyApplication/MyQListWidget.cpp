#include "MyQListWidget.h"
#include <QIcon>
#include <QListWidgetItem>
#include <QMessageBox>

MyQListWidget::MyQListWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	//����˵��
	QString description = u8"QListWidget�ļ�ʹ�ã�a.���Ӵ���ͼ�꣨QIcon�������ֵ�Item; b.QListWidget�л�ģʽ��c.ɾ��Item��";
	ui.labelDescription->setText(description);

	QIcon icon(":/image/image/book.png");
	QListWidgetItem* item = new QListWidgetItem(icon, u8"�鼮");
	//����Data
	item->setData(Qt::UserRole, 0); 
	item->setData(Qt::ToolTipRole, "book");
	ui.mListWidget->addItem(item);

	QIcon icon1(":/image/image/camera.png");
	item = new QListWidgetItem(icon1, u8"���");
	item->setData(Qt::UserRole, 1);
	item->setData(Qt::ToolTipRole, "camera");
	ui.mListWidget->addItem(item);

	QIcon icon2(":/image/image/settings.png");
	item = new QListWidgetItem(icon2, u8"����");
	item->setData(Qt::UserRole, 2);
	item->setData(Qt::ToolTipRole, "settings");
	ui.mListWidget->addItem(item);

	connect(ui.btnDelete, SIGNAL(clicked()), this, SLOT(onSlotDeleteItem()));
	connect(ui.btnChangeMode, SIGNAL(clicked()), this, SLOT(onSlotChangeViewMode()));
	connect(ui.mListWidget, SIGNAL(itemDoubleClicked(QListWidgetItem*)), this, SLOT(onSlotDbClick(QListWidgetItem* )));

}

MyQListWidget::~MyQListWidget()
{
}

//ɾ����ǰitem
void MyQListWidget::onSlotDeleteItem()
{
	int rowIndex = ui.mListWidget->currentRow();
	QListWidgetItem* item = ui.mListWidget->takeItem(rowIndex);
	if (item)
	{
		delete item;
	}
}
//�л�ģʽ
void MyQListWidget::onSlotChangeViewMode()
{
	if (ui.mListWidget->viewMode()== QListWidget::ListMode) {
		ui.mListWidget->setViewMode(QListWidget::IconMode);
	}
	else {
		ui.mListWidget->setViewMode(QListWidget::ListMode);
	}
}

void MyQListWidget::onSlotDbClick(QListWidgetItem* item) {
	int index = item->data(Qt::UserRole).toInt();
	QString text = item->data(Qt::ToolTipRole).toString();
	QMessageBox::information(nullptr,"title:"+index, text);
}
