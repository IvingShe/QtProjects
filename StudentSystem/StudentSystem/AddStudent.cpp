#include "AddStudent.h"
#include<QMessageBox>

#include<QFile>
#include<QTextStream>

AddStudent::AddStudent(QWidget *parent)
    : QDialog(parent)
{
    ui.setupUi(this);
	connect(this->ui.btnOK, SIGNAL(clicked()), this, SLOT(onOkClick()));
	//connect(this->ui.btnOK, SIGNAL(clicked(false)), this, SLOT(onOkClick));

	connect(this->ui.btnCancel, SIGNAL(clicked()), this, SLOT(onCancleClick()));
//	connect(this->ui.btnCancel, SIGNAL(clicked()), this, SLOT(onCancleClick));
	//QMessageBox::critical(this,)
}


void AddStudent::onOkClick() 
{
	QString name = this->ui.leName->text();
	QString id = this->ui.leId->text();
	if (name.length()==0||id.length()<8) {
		QMessageBox::critical(this, u8"����", u8"���������Ϣ����!", QMessageBox::Yes);
	}
	else 
	{
		QString age = ui.cbAge->currentText();
		QString collage = ui.cbColleage->currentText();
		QString content = name + " " + id + " " + age + " " + collage+"\n";
	  int result = QMessageBox::question(this,u8"ȷ����Ϣ",content, u8"ȷ��", u8"ȡ��");
	  if (result==0) {
		  clearUserInformation();
		  saveContent(content);
	  }
	}
	
};

void AddStudent::onCancleClick() 
{
	QMessageBox msgBox;
	msgBox.setText("onCancleClick.");
	msgBox.exec();
};

void AddStudent::clearUserInformation() {
	ui.leId->setText("");
	ui.leName->setText("");
	ui.leName->setFocus();
	ui.cbAge->setCurrentIndex(0);
	ui.cbColleage->setCurrentIndex(0);
}
void AddStudent::saveContent(QString content)
{
	QFile file("studentInfo.txt");
	if(!file.open(QIODevice::Append|QIODevice::Text)) {
		QMessageBox::critical(this, "����", "�ļ���ʧ�ܣ��޷�������Ϣ��", "ȷ��");
		return;
	}
	QTextStream outfile(&file);
	outfile << content;
	file.close();

}
