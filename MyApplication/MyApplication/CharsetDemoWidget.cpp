#include "CharsetDemoWidget.h"
#include <QTextCodec> 

CharsetDemoWidget::CharsetDemoWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	initConnection();
}

CharsetDemoWidget::~CharsetDemoWidget()
{
}

void CharsetDemoWidget::initConnection()
{
	connect(ui.pushButton,SIGNAL(clicked()), this, SLOT(onBtnClick()));
	connect(ui.btnSave, SIGNAL(clicked()), this, SLOT(onBtnClick()));
	connect(ui.btmDisplayUTF8, SIGNAL(clicked()), this, SLOT(onBtnClick()));
	connect(ui.btnSaveUTF8, SIGNAL(clicked()), this, SLOT(onBtnClick()));
}

void CharsetDemoWidget::onBtnClick()
{	

	if (sender() == ui.pushButton) 
	{
		display();
	}
	else if(sender() == ui.btnSave)
	{
		save(); 
	}
	else if (sender() == ui.btmDisplayUTF8)
	{
		displayUTF8();
	}
	else if (sender() == ui.btnSaveUTF8)
	{
		saveUTF8();
	}
}


void CharsetDemoWidget::display()
{
	//GBK->QString（GBK-UTF16转换）
	QString content = QString::fromLocal8Bit("你好，中国！");


	ui.lineEdit->setText(content);
	char text[] = "你好中国";
	int size =sizeof(text);
}

void  CharsetDemoWidget::save()
{
	//QString->GBK（UTF16-GBK转换）
	QString content = ui.leContent->text();
	QByteArray array = content.toLocal8Bit();
	const char* pChar = array.data();
}

void CharsetDemoWidget::displayUTF8()
{
	//char utf8[] = {0xE4,0xBD, 0xA0, 0xE5,  0xA5, 0xBD,0};
	char utf8[] = { 0xE4,0xBD, 0x98, 0xE7,  0xAB, 0x8B,0 };
	QString content = QString::fromUtf8(utf8);
	ui.lineEditUTF8->setText(content);
}

void  CharsetDemoWidget::saveUTF8()
{	
	QString content = ui.leContentUTF8->text();
	QByteArray array =content.toUtf8();
	const char* pChar = array.data();
	int size = sizeof(pChar);
}



