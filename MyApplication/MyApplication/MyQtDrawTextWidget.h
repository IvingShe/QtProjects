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
	void simple(); //��ʽ1�����ı��Ļ���
	void wrap();//��ʽ2�������ı��Ļ���
	void dynamic();//��ʽ3�������ı����ݶ�̬��������

private slots:
	void onSlotSimpleBtnClicked();
	void onSlotWrapBtnClicked();
	void onSlotDynmicBtnClicked();
private:
	Ui::MyQtDrawTextWidget ui;
	int paintType;

};
