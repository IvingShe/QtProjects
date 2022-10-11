#pragma once

#include <QMainWindow>
#include "ui_NotePadMainWindow.h"

/*
* NotePad¼òµ¥Ð¡³ÌÐò
*/
class NotePadMainWindow : public QMainWindow
{
	Q_OBJECT

public:
	NotePadMainWindow(QWidget *parent = nullptr);
	~NotePadMainWindow();

private slots:

	void onNew();
	void onOpen();
	void onSave();
	void onHelp();
	void onSettings();

private:
	Ui::NotePadMainWindowClass ui;
};
