#include "QVLayoutDemoWidget.h"
#include <QLineEdit>
/*
* 引入命名空间
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

	//读取CSS文件，并将CSS样式设置到本窗口中
	QString styleSheet = ApplicationGlobal1::readCssFile("QVLayoutDemoWidget_Skin.css");
	this->setStyleSheet(styleSheet);

}

QVLayoutDemoWidget::~QVLayoutDemoWidget()
{
}
