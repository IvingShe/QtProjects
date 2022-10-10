#include "LoginDialog.h"

LoginDialog::LoginDialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.loginBtn,SIGNAL(clicked()) ,this, SLOT(onOK()));
	connect(ui.cancleBtn, SIGNAL(clicked()), this, SLOT(onCancel()));
}

LoginDialog::~LoginDialog()
{
}

void LoginDialog::onOK()
{
	mUserName = ui.userEdit->text();
	mPassword = ui.passwordEdit->text();
	accept();//关闭LoginDialog窗口，并在LoginDialog函数exec()中返回QDialog::Accepted值；
	
}

void LoginDialog::onCancel()
{
	reject();//关闭LoginDialog窗口，并在LoginDialog函数exec()中返回QDialog::Rejected值；
	
}