#pragma once

#include <QDialog>
#include "ui_SendProgressDlg.h"

class SendProgressDlg : public QDialog
{
	Q_OBJECT

public:
	SendProgressDlg(QWidget *parent = Q_NULLPTR);
	~SendProgressDlg();

private:
	Ui::SendProgressDlg ui;
};
