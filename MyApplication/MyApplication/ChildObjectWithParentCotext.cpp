#include "ChildObjectWithParentCotext.h"
#include <QDebug>
ChildObjectWithParentCotext::ChildObjectWithParentCotext(QObject *parent)
	: QObject(parent)
{
	qDebug() << "ChildObjectWithParentCotext";
}

ChildObjectWithParentCotext::~ChildObjectWithParentCotext()
{
	qDebug() << "~ChildObjectWithParentCotext";
}
