#pragma once

#include <QWidget>
#include "ui_SearchWindow.h"
/*
* �������ڷ�ģ̬��
*/
class SearchWindow : public QWidget
{
	Q_OBJECT

public:
	SearchWindow(QWidget *parent = nullptr);
	~SearchWindow();

//Ϊ����ʹ������ʹ�õ��˳�Ա��������Ҫui�ķ���������private���public��
public:
	Ui::SearchWindowClass ui;
};
