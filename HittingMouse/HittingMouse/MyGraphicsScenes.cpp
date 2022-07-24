#include "MyGraphicsScenes.h"
#include<QGraphicsItem>
MyGraphicsScenes::MyGraphicsScenes(QObject *parent)
	: QGraphicsScene(parent)
{
	this->pItem = new MyGraphicsPixmapItem();
	this->addItem(pItem);
}

MyGraphicsScenes::~MyGraphicsScenes()
{
}
