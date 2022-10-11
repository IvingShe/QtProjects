#include "MyMainWindowDemo.h"

MyMainWindowDemo::MyMainWindowDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);



	//QAction的点击信号与槽函数
	connect(ui.actionNew,SIGNAL(triggered()),this,SLOT(onNew()));
	connect(ui.actionOpen, SIGNAL(triggered()), this, SLOT(onOpen()));
	connect(ui.actionSave, SIGNAL(triggered()), this, SLOT(onSave()));

	//QToolBar手动增加自定义控件
	pLineEdit = new QLineEdit(this);
	pLineEdit->setMaximumWidth(200);
	ui.mainToolBar->insertWidget(ui.actionNew, pLineEdit);
}

MyMainWindowDemo::~MyMainWindowDemo()
{
}



void MyMainWindowDemo::onNew()
{
	ui.textContent->setPlainText(u8"您点击了新建QAction!");
	//获取插入的自定义控件的内容 。
	ui.textContent->appendPlainText(pLineEdit->text());
}

void MyMainWindowDemo::onOpen()
{
	ui.textContent->setPlainText(u8"您点击了打开QAction!");
	ui.textContent->appendPlainText(pLineEdit->text());
}

void MyMainWindowDemo::onSave()
{
	ui.textContent->setPlainText(u8"您点击了保存QAction!");

	ui.textContent->appendPlainText(pLineEdit->text());
}
