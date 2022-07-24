#pragma once

#include <QWidget>
#include "ui_MyQtDrawTextWidget.h"

class MyQtDrawTextWidget : public QWidget
{
	Q_OBJECT

public:
	MyQtDrawTextWidget(QWidget *parent = Q_NULLPTR);
	~MyQtDrawTextWidget();

protected:
	virtual void paintEvent(QPaintEvent *event);

private:
	void simple(); //方式1：简单文本的绘制
	void wrap();//方式2：换行文本的绘制
	void dynamic();//方式3：根据文本内容动态绘制内容

private slots:
	void onSlotSimpleBtnClicked();
	void onSlotWrapBtnClicked();
	void onSlotDynmicBtnClicked();
private:
	Ui::MyQtDrawTextWidget ui;
	int paintType;

};
