#pragma once

#include <QMainWindow>
#include "ui_MyMainWindowDemo.h"
#include<QLineEdit>
/*
*QMainWindow��չʾ��
*
*/
class MyMainWindowDemo : public QMainWindow
{
	Q_OBJECT

public:
	MyMainWindowDemo(QWidget *parent = nullptr);
	~MyMainWindowDemo();

private slots:
	void onNew();
	void onOpen(); 
	void onSave();
private:
	Ui::MyMainWindowDemoClass ui;
	QLineEdit* pLineEdit;
};
