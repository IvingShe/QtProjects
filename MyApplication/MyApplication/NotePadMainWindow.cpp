#include "NotePadMainWindow.h"
#include<QFileDialog>
#include<QDebug>
NotePadMainWindow::NotePadMainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//connect(ui.ac);
	//QAction�ĵ���ź���ۺ���
	connect(ui.actionNew, SIGNAL(triggered()), this, SLOT(onNew()));
	connect(ui.actionOpen, SIGNAL(triggered()), this, SLOT(onOpen()));
	connect(ui.actionSave, SIGNAL(triggered()), this, SLOT(onSave()));
	connect(ui.actionHelp, SIGNAL(triggered()), this, SLOT(onHelp()));
	connect(ui.actionSettings, SIGNAL(triggered()), this, SLOT(onSettings()));
}

NotePadMainWindow::~NotePadMainWindow()
{
}

void NotePadMainWindow::onNew()
{
	ui.textContent->clear();
}
void NotePadMainWindow::onOpen()
{
	QString  fileName = QFileDialog::getOpenFileName(
		this,
		u8"���ļ�");
	//ѡ���ļ��󣬾���·�����ļ��������û��ѡ��Ļ���ȡ���Ļ����ļ�Ϊ�ա�
	if (fileName.length() > 0)
	{
		qDebug() << fileName;
		ui.textContent->setPlainText(fileName);
		//to do ���ļ��Ķ�����ʾ��QPlaintTextEdit��
		QFile file(fileName);
		if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
		{
			return;
		}
		QString content;
		while (!file.atEnd())
		{
			QByteArray line = file.readLine();
			content.append(line);
		}
		ui.textContent->setPlainText(content);
	}
	else
	{
		qDebug() << fileName;
	}
}
void NotePadMainWindow::onSave()
{
	QString  fileName = QFileDialog::getSaveFileName(
		this,
		u8"����");
	//ѡ���ļ��󣬾���·�����ļ��������û��ѡ��Ļ���ȡ���Ļ����ļ�Ϊ�ա�
	if (fileName.length() > 0)
	{
		//todo ��ȡQPlaintTextEdit���ݲ��������ļ���
		qDebug() << fileName;
		QString content = ui.textContent->toPlainText();
		QFile file(fileName);
		if (file.open(QIODevice::WriteOnly))
		{
			qint32 size = file.write(content.toStdString().c_str());
		}
	}
	//״̬����д���֣�
	ui.statusBar->showMessage(u8"������ɣ�",10*1000);
}
void NotePadMainWindow::onHelp()
{
}
void NotePadMainWindow::onSettings()
{
}