#include "QtApplicationDemo.h"
#include<QDebug>
QtApplicationDemo::QtApplicationDemo(int &argc, char **argv)
	: QApplication(argc, argv)
{
	qDebug() << "#QtApplicationDemo#";
}

QtApplicationDemo::~QtApplicationDemo()
{
}
