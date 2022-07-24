#include "QChildObjectWithoutParent.h"
#include <QDebug>
QChildObjectWithoutParent::QChildObjectWithoutParent(QObject *parent)
	: QObject(parent)
{
	qDebug() << "QChildObjectWithoutParent";
}

QChildObjectWithoutParent::~QChildObjectWithoutParent()
{
	qDebug() << "~QChildObjectWithoutParent";
}

