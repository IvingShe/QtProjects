#include "MyMainWindowDemo.h"

MyMainWindowDemo::MyMainWindowDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);



	//QAction�ĵ���ź���ۺ���
	connect(ui.actionNew,SIGNAL(triggered()),this,SLOT(onNew()));
	connect(ui.actionOpen, SIGNAL(triggered()), this, SLOT(onOpen()));
	connect(ui.actionSave, SIGNAL(triggered()), this, SLOT(onSave()));

	//QToolBar�ֶ������Զ���ؼ�
	pLineEdit = new QLineEdit(this);
	pLineEdit->setMaximumWidth(200);
	ui.mainToolBar->insertWidget(ui.actionNew, pLineEdit);
}

MyMainWindowDemo::~MyMainWindowDemo()
{
}



void MyMainWindowDemo::onNew()
{
	ui.textContent->setPlainText(u8"��������½�QAction!");
	//��ȡ������Զ���ؼ������� ��
	ui.textContent->appendPlainText(pLineEdit->text());
}

void MyMainWindowDemo::onOpen()
{
	ui.textContent->setPlainText(u8"������˴�QAction!");
	ui.textContent->appendPlainText(pLineEdit->text());
}

void MyMainWindowDemo::onSave()
{
	ui.textContent->setPlainText(u8"������˱���QAction!");

	ui.textContent->appendPlainText(pLineEdit->text());
}
