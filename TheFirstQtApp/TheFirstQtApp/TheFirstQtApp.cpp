#include "TheFirstQtApp.h"
#include<QDebug>
TheFirstQtApp::TheFirstQtApp(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	qDebug() << "TheFirstQtApp constructor";
	QObject::connect(this->ui.btnLogin,SIGNAL(clicked()),this,SLOT(login()));
}

void TheFirstQtApp::login() 
{	
	qDebug() << "login";
	QString userName =ui.edtUserName ->text();
	QString password = ui.edtPassword ->text();
	qDebug() << "userName:"+userName+",password:"+password;
	if (userName=="sheli"&&password=="1234")
	{
		qDebug() << "µÇÂ¼³É¹¦";
	}else{
		qDebug() << "µÇÂ¼Ê§°Ü";
	}
}