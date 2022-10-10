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
		u8"���ļ�");
	//ѡ���ļ��󣬾���·�����ļ��������û��ѡ��Ļ���ȡ���Ļ����ļ�Ϊ�ա�
	if (fileName.length()>0)
	{
		qDebug() << fileName;
		ui.text->setPlainText(fileName);
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
		u8"����");
	//ѡ���ļ��󣬾���·�����ļ��������û��ѡ��Ļ���ȡ���Ļ����ļ�Ϊ�ա�
	if (fileName.length() > 0)
	{
		//todo ��ȡQPlaintTextEdit���ݲ��������ļ���
		qDebug() << fileName;
		QString content = ui.text->toPlainText();
		QFile file(fileName);
		if (file.open(QIODevice::WriteOnly))
		{
			qint32 size =file.write(content.toStdString().c_str());
		}
	}
}