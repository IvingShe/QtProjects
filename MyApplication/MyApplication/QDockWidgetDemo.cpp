#include "QDockWidgetDemo.h"

QDockWidgetDemo::QDockWidgetDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.btnSearch,SIGNAL(clicked()),this,SLOT(onSearch()));
}

QDockWidgetDemo::~QDockWidgetDemo()
{
}

void QDockWidgetDemo::onSearch()
{
	QString content =ui.lineEdit->text();
	content.append(u8"Äúµã»÷ÁËËÑË÷°´Å¥");
	ui.textEdit->setText(content);
}