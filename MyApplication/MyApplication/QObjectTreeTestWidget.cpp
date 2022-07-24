#include "QObjectTreeTestWidget.h"

QObjectTreeTestWidget::QObjectTreeTestWidget(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//pParentObject = new 	ParentObject();
	pParentObject = new 	ParentObject(this);
	connect(ui.pushButton, SIGNAL(clicked()),this,SLOT(onDestruct()));
}

QObjectTreeTestWidget::~QObjectTreeTestWidget()
{
}

void	QObjectTreeTestWidget::onDestruct()
{
	qDebug("#onDestruct#");
	if (pParentObject) {
		delete pParentObject;
		pParentObject = Q_NULLPTR;
	}
}