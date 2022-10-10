#include "NonModalWindowDemo.h"

NonModalWindowDemo::NonModalWindowDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	mpSearchWindow = new SearchWindow(this);
	//以独立窗口的形式展示出来，窗口中包含标题，最大化，最小化以及关闭按钮。
	mpSearchWindow->setWindowFlag(Qt::Window);

	connect(ui.startBtn, SIGNAL(clicked()), this, SLOT(onStartSearch()));

	//搜索窗口中按钮信号与本类的槽函数关联
	//这是不是破坏了的类的封装性
	connect(mpSearchWindow->ui.btnSearch, SIGNAL(clicked()), this, SLOT(onSearch()));
}

NonModalWindowDemo::~NonModalWindowDemo()
{
}

void NonModalWindowDemo::onStartSearch()
{
	//展示非模态窗口
	mpSearchWindow->show();
}

void NonModalWindowDemo::onSearch()
{
	//将搜索窗口中的内容获取到，并显示在本类展示控件中
	QString content=	mpSearchWindow->ui.textLlineEdit->text();
	ui.contentText->appendPlainText(content);
}