#include "QtWidgetsClass.h"


QtWidgetsClass::QtWidgetsClass(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(this->ui.actionadd_stud, SIGNAL(triggered()), this, SLOT(showAddStu()));
	connect(this->ui.actionquery_stud, SIGNAL(triggered()), this, SLOT(qeuryStu()));
}
void QtWidgetsClass::showAddStu() {	
	a.show();
}
QtWidgetsClass::~QtWidgetsClass()
{

}
void QtWidgetsClass::qeuryStu() {
	queryDialog.show();
}