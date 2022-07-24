#include "DLLFirstDemoClass.h"
#include  <QDebug>
DLLFirstDemoClass::DLLFirstDemoClass()
{
}

void DLLFirstDemoClass::printLog() 
{
	qDebug() << "printLog";
}
