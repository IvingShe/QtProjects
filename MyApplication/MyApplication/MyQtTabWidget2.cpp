#include "MyQtTabWidget2.h"
#include <QLabel>

MyQtTabWidget2::MyQtTabWidget2(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.btnAdd, SIGNAL(clicked()), this, SLOT(OnSlotAddTab()));
	connect(ui.btnDelete, SIGNAL(clicked()), this, SLOT(OnSlotDeleteTab()));
}

MyQtTabWidget2::~MyQtTabWidget2()
{
}

void MyQtTabWidget2::OnSlotAddTab() {
	QLabel*   label = new QLabel;
	label->setText(u8"我是来自于自定义的Widget");	
	ui.tabWidget->addTab(label,u8"标签");


}
void MyQtTabWidget2::OnSlotDeleteTab() {
	int index =ui.tabWidget->currentIndex();
	ui.tabWidget->removeTab(index);
}