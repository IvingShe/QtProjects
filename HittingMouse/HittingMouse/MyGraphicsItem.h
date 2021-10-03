#pragma once

#include <QGraphicsPixmapItem>

class MyGraphicsItem : public QGraphicsPixmapItem
{
	Q_OBJECT

public:
	MyGraphicsItem(QObject *parent);
	~MyGraphicsItem();
};
