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
	accept();//�ر�LoginDialog���ڣ�����LoginDialog����exec()�з���QDialog::Acceptedֵ��
	
}

void LoginDialog::onCancel()
{
	reject();//�ر�LoginDialog���ڣ�����LoginDialog����exec()�з���QDialog::Rejectedֵ��
	
}