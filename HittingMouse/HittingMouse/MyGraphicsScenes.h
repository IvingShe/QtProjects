#pragma once

#include <QObject>
#include <QGraphicsScene>

class MyGraphicsScenes : public QGraphicsScene
{
	Q_OBJECT

public:
	MyGraphicsScenes(QObject *parent);
	~MyGraphicsScenes();
};
