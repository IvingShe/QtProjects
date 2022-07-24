#pragma once

#include <QWidget>
#include "ui_CharsetDemoWidget.h"

class CharsetDemoWidget : public QWidget
{
	Q_OBJECT

public:
	CharsetDemoWidget(QWidget *parent = Q_NULLPTR);
	~CharsetDemoWidget();
	static std::string  FromUnicode(const QString content);
private:
	void initConnection();
	void display();
	void  save();
	void displayUTF8();
	void  saveUTF8();

private slots:
	void onBtnClick();
private:
	Ui::CharsetDemoWidget ui;
};
