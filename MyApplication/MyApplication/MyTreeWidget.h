#pragma once

#include <QWidget>
#include<QTreeWidgetItem>

#include "ui_MyTreeWidget.h"

class MyTreeWidget : public QWidget
{
	Q_OBJECT
public:
	MyTreeWidget(QWidget *parent = Q_NULLPTR);
	~MyTreeWidget();

private:
	QTreeWidgetItem*  addItem(const QString& name,
		                                           const QString& lastModifiedTime,
		                                           const QString& type,
		                                             int size,
		                                              QIcon icon,
		                         QTreeWidgetItem*  parent=NULL);

private:
	Ui::MyTreeWidget ui;
};
