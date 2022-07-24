#pragma once

#include <QWidget>
#include <QPixmap>
#include "ui_MyDrawingPictureWidget.h"

class MyDrawingPictureWidget : public QWidget
{
	Q_OBJECT

public:
	MyDrawingPictureWidget(QWidget *parent = Q_NULLPTR);
	~MyDrawingPictureWidget();

protected:
	virtual void paintEvent(QPaintEvent *event);

private:
	Ui::MyDrawingPictureWidget ui;
	QPixmap* mPixmap;
	QPixmap* mPixmap2;
};
