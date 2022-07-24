#pragma once

#include <QObject>

class QChildObjectWithoutParent  : public QObject
{
	Q_OBJECT

public:
	QChildObjectWithoutParent(QObject *parent=Q_NULLPTR);
	~QChildObjectWithoutParent();
};
