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
	//�Զ���Widget��Ҫ����Щ�������л���
	void paintEvent(QPaintEvent * event);
private:
	/*Ui::MyCircle ui;*/
};
