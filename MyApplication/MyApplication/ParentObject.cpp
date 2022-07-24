#include "ParentObject.h"
#include <QDebug>
ParentObject::ParentObject(QObject *parent)
	: QObject(parent)
{
	qDebug() << "ParentObject";
	//创建了两个对象
	child = new ChildObjectWithParentCotext(this);//使用了ParentObject的this指针
	pChildWithoutParent = new QChildObjectWithoutParent(Q_NULLPTR);//没有使用ParentObject的this指针
}

ParentObject::~ParentObject()
{
	qDebug() << "~ParentObject";
	//避免内存泄漏，
	//需要显性的删除 没有使用ParentObject的this上为上下文的pChildWithoutParent对象
	if (pChildWithoutParent) {
		delete pChildWithoutParent;
		pChildWithoutParent = Q_NULLPTR;
	}
}
