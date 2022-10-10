#pragma once

#include <QWidget>
#include "ui_SearchWindow.h"
/*
* 搜索窗口非模态窗
*/
class SearchWindow : public QWidget
{
	Q_OBJECT

public:
	SearchWindow(QWidget *parent = nullptr);
	~SearchWindow();

//为了在使用类中使用到此成员变量，需要ui的访问属性由private变成public的
public:
	Ui::SearchWindowClass ui;
};
