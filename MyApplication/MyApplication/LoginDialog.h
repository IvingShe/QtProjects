#pragma once

#include <QDialog>
#include "ui_LoginDialog.h"

class LoginDialog : public QDialog
{
	Q_OBJECT

public:
	LoginDialog(QWidget *parent = nullptr);
	~LoginDialog();

private slots:
	void onOK();

	void onCancel();
public:
	//�û�����
	QString mUserName = NULL;
	//����
	QString mPassword=NULL;

private:
	Ui::LoginDialogClass ui;
};
