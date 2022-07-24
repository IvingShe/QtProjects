#pragma once

#include <QFrame>
//#include "ui_MyCircle.h"

class MyCircle : public QFrame
{
	Q_OBJECT

public:
	MyCircle(QWidget *parent = Q_NULLPTR);
	~MyCircle();
protected:
	//自定义Widget需要重新些函数进行绘制
	void paintEvent(QPaintEvent * event);
private:
	/*Ui::MyCircle ui;*/
};
