#pragma once

#include <QWidget>
#include "ui_UsingMyCircleInQtDesigner.h"

class UsingMyCircleInQtDesigner : public QWidget
{
	Q_OBJECT

public:
	UsingMyCircleInQtDesigner(QWidget *parent = Q_NULLPTR);
	~UsingMyCircleInQtDesigner();

private:
	Ui::UsingMyCircleInQtDesigner ui;
};
