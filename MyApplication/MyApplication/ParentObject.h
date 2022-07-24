#pragma once

#include <QObject>
#include "ChildObjectWithParentCotext.h"
#include "QChildObjectWithoutParent.h"

class ParentObject  : public QObject
{
	Q_OBJECT

public:
	ParentObject(QObject *parent=nullptr);
	~ParentObject();

private:
	ChildObjectWithParentCotext* child = Q_NULLPTR;
	QChildObjectWithoutParent* pChildWithoutParent = Q_NULLPTR;
};
