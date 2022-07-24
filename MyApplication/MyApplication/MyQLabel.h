#pragma once

#include <QWidget>
#include "ui_MyQLabel.h"

class MyQLabel : public QWidget
{
	Q_OBJECT

public:
	MyQLabel(QWidget *parent = Q_NULLPTR);
	~MyQLabel();

private:
	Ui::MyQLabel ui;
};
