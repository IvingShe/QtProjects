#pragma once

#include <QMainWindow>
#include "ui_QFileDialogDemoWidget.h"

class QFileDialogDemoWidget : public QMainWindow
{
	Q_OBJECT

public:
	QFileDialogDemoWidget(QWidget *parent = nullptr);
	~QFileDialogDemoWidget();
private slots:
	void onOpen();
	void onSave();
private:
	Ui::QFileDialogDemoWidgetClass ui;
};
