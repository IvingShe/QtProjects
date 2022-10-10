#include "QFileDialogDemoWidget.h"
#include <QFileDialog> 
#include<QDebug>
#include <QFile>

QFileDialogDemoWidget::QFileDialogDemoWidget(QWidget *parent): QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.btnOpen, SIGNAL(clicked()), this, SLOT(onOpen()));
	connect(ui.btnSave, SIGNAL(clicked()), this, SLOT(onSave()));
}

QFileDialogDemoWidget::~QFileDialogDemoWidget()
{
	
}

void QFileDialogDemoWidget::onOpen()
{
	QString  fileName = QFileDialog::getOpenFileName(
		this,
		u8"打开文件");
	//选择文件后，绝对路径的文件名，如果没有选择的话或取消的话，文件为空。
	if (fileName.length()>0)
	{
		qDebug() << fileName;
		ui.text->setPlainText(fileName);
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
		ui.text->setPlainText(content);
	}
	else 
	{
		qDebug() << fileName;
	}
}

void QFileDialogDemoWidget::onSave()
{
	QString  fileName = QFileDialog::getSaveFileName(
		this,
		u8"保存");
	//选择文件后，绝对路径的文件名，如果没有选择的话或取消的话，文件为空。
	if (fileName.length() > 0)
	{
		//todo 读取QPlaintTextEdit内容并保存在文件中
		qDebug() << fileName;
		QString content = ui.text->toPlainText();
		QFile file(fileName);
		if (file.open(QIODevice::WriteOnly))
		{
			qint32 size =file.write(content.toStdString().c_str());
		}
	}
}