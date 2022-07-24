#include "MyQStackedWidget.h"

MyQStackedWidget::MyQStackedWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	mMyQtStackedWidgetPage = new MyQtStackedWidgetPage();
	ui.stackedWidget->addWidget(mMyQtStackedWidgetPage);
	connect(ui.btnPage1, SIGNAL(clicked()), this, SLOT(showPage1()));
	connect(ui.btnPage2, SIGNAL(clicked()), this, SLOT(showPage2()));
	connect(ui.btnPage3, SIGNAL(clicked()), this, SLOT(showPage3()));
}

MyQStackedWidget::~MyQStackedWidget()
{
}

void MyQStackedWidget::showPage1()
{
	ui.stackedWidget->setCurrentWidget(ui.page_1);
}

void MyQStackedWidget::showPage2() 
{
	ui.stackedWidget->setCurrentWidget(ui.page_2);
}

void MyQStackedWidget::showPage3() 
{
	ui.stackedWidget->setCurrentWidget(mMyQtStackedWidgetPage);
}

