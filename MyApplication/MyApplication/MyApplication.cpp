#include "MyApplication.h"
#include <QDebug>

MyApplication::MyApplication(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	qDebug() << "this";
	

}
