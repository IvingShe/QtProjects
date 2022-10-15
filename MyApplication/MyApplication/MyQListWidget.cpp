#include "MyQListWidget.h"
#include <QIcon>
#include <QListWidgetItem>
#include <QMessageBox>

MyQListWidget::MyQListWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	//内容说明
	QString description = u8"QListWidget的简单使用：a.增加带有图标（QIcon）的文字的Item; b.QListWidget切换模式；c.删除Item等";
	ui.labelDescription->setText(description);

	QIcon icon(":/image/image/book.png");
	QListWidgetItem* item = new QListWidgetItem(icon, u8"书籍");
	//增加Data
	item->setData(Qt::UserRole, 0); 
	item->setData(Qt::ToolTipRole, "book");
	ui.mListWidget->addItem(item);

	QIcon icon1(":/image/image/camera.png");
	item = new QListWidgetItem(icon1, u8"相机");
	item->setData(Qt::UserRole, 1);
	item->setData(Qt::ToolTipRole, "camera");
	ui.mListWidget->addItem(item);

	QIcon icon2(":/image/image/settings.png");
	item = new QListWidgetItem(icon2, u8"设置");
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

//删除当前item
void MyQListWidget::onSlotDeleteItem()
{
	int rowIndex = ui.mListWidget->currentRow();
	QListWidgetItem* item = ui.mListWidget->takeItem(rowIndex);
	if (item)
	{
		delete item;
	}
}
//切换模式
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
