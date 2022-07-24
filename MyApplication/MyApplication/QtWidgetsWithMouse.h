#pragma once

#include <QWidget>
#include "ui_QtWidgetsWithMouse.h"
#include <QVector>

class QtWidgetsWithMouse : public QWidget
{
	Q_OBJECT

public:
	QtWidgetsWithMouse(QWidget *parent = Q_NULLPTR);
	~QtWidgetsWithMouse();

protected:
	virtual void paintEvent(QPaintEvent *event);
	void mousePressEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	void mouseDoubleClickEvent(QMouseEvent *event);
private:
	Ui::QtWidgetsWithMouse ui;

	QVector<QPoint>  mPointVector;
	bool mPressed;
};
