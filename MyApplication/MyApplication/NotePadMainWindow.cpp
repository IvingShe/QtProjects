#include "NotePadMainWindow.h"
#include<QFileDialog>
#include<QDebug>
NotePadMainWindow::NotePadMainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//connect(ui.ac);
	//QAction的点击信号与槽函数
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
		u8"打开文件");
	//选择文件后，绝对路径的文件名，如果没有选择的话或取消的话，文件为空。
	if (fileName.length() > 0)
	{
		qDebug() << fileName;
		ui.textContent->setPlainText(fileName);
		//to do 对文件的读并显示在QPlaintTextEdit中
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
		u8"保存");
	//选择文件后，绝对路径的文件名，如果没有选择的话或取消的话，文件为空。
	if (fileName.length() > 0)
	{
		//todo 读取QPlaintTextEdit内容并保存在文件中
		qDebug() << fileName;
		QString content = ui.textContent->toPlainText();
		QFile file(fileName);
		if (file.open(QIODevice::WriteOnly))
		{
			qint32 size = file.write(content.toStdString().c_str());
		}
	}
	//状态栏填写文字；
	ui.statusBar->showMessage(u8"保存完成！",10*1000);
}
void NotePadMainWindow::onHelp()
{
}
void NotePadMainWindow::onSettings()
{
}