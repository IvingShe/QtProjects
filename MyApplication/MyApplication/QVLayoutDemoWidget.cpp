#include "QVLayoutDemoWidget.h"
#include <QLineEdit>
/*
* ���������ռ�
*/
#include "MyNameSpace.h"
using namespace ApplicationGlobal1;

QVLayoutDemoWidget::QVLayoutDemoWidget(QWidget *parent)
	: QWidget(parent)
{
	//ui.setupUi(this);

	mLineEdit = new QLineEdit(this);
	mPlainTextEdit = new QPlainTextEdit(this);
	mVLayout = new QVBoxLayout(this);

	mVLayout->addWidget(mLineEdit); 
	mVLayout->addWidget(mPlainTextEdit);
	
	this->setLayout(mVLayout);

	//��ȡCSS�ļ�������CSS��ʽ���õ���������
	QString styleSheet = ApplicationGlobal1::readCssFile("QVLayoutDemoWidget_Skin.css");
	this->setStyleSheet(styleSheet);

}

QVLayoutDemoWidget::~QVLayoutDemoWidget()
{
}
