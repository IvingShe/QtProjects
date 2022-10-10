#pragma once

#include <QMainWindow>
#include "ui_NonModalWindowDemo.h"
#include "SearchWindow.h"
/**
* ��ģ̬������ʾ��
*/
class NonModalWindowDemo : public QMainWindow
{
	Q_OBJECT

public:
	NonModalWindowDemo(QWidget *parent = nullptr);

	~NonModalWindowDemo();


private slots:

	void onStartSearch();

	void onSearch();

private:
	Ui::NonModalWindowDemoClass ui;
	SearchWindow* mpSearchWindow;
};
