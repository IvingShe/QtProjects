#pragma once

#include <QObject>

class ChildObjectWithParentCotext  : public QObject
{
	Q_OBJECT

public:
	ChildObjectWithParentCotext(QObject *parent);
	~ChildObjectWithParentCotext();
};
