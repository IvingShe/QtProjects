#pragma once

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include "MyGraphicsPixmapItem.h"

class MyGraphicsScenes : public QGraphicsScene
{
	Q_OBJECT

public:
	MyGraphicsScenes(QObject *parent);
	~MyGraphicsScenes();

private:
	MyGraphicsPixmapItem *pItem;
};
