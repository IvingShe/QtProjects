#pragma once

#include <QWidget>
#include "ui_FileSenderWidget.h"
//#include "workerThread/SendProgressDlg.h"
#include "SendProgressDlg.h"
class FileSenderWidget : public QWidget
{
	Q_OBJECT

public:
	FileSenderWidget(QWidget *parent = Q_NULLPTR);
	~FileSenderWidget();

private slots:
	void onSelectFile();
	void onSend();

private:
	Ui::FileSenderWidget ui;

};
