#pragma once

#include <QMainWindow>
#include "ui_QObjectTreeTestWidget.h"
#include "ParentObject.h"

class QObjectTreeTestWidget : public QMainWindow
{
	Q_OBJECT

public:
	QObjectTreeTestWidget(QWidget *parent = nullptr);
	~QObjectTreeTestWidget();

public slots:
	void	onDestruct();
private:
	Ui::QObjectTreeTestWidgetClass ui;
	ParentObject* pParentObject;
};
