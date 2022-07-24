#pragma once

#include <QWidget>
#include "ui_MyQCombobox.h"

class MyQCombobox : public QWidget
{
	Q_OBJECT

public:
	MyQCombobox(QWidget *parent = Q_NULLPTR);
	~MyQCombobox();

private slots:
	void onSlotComboBox();

	void onSlotCurrentIndexChanged(int idex);
private:
	Ui::MyQCombobox ui;
};
