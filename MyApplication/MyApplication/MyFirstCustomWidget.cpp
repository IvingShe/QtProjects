#include "MyFirstCustomWidget.h"


MyFirstCustomWidget::MyFirstCustomWidget(QWidget *parent)
	: QWidget(parent)
{
	//ui.setupUi(this);
	m_Btn = new QPushButton(this);
	m_Btn->setText("Hello ,Qt!");
	m_Btn->setGeometry(50,50, 200, 50);
	//�����Ӵ��ڿؼ���ʽ��������ɫ��������ɫ
	QString widgetStyle= "QWidget{background:yellow;}  QPushButton{background:blue;color:red;} ";	//
	this->setStyleSheet(widgetStyle);

	//�����Ӵ�����ĳһ���ؼ�����ʽ��������ɫ�����ߺ�Բ��
	QString pushButtonSytle = "QPushButton{color:white; border:3px solid green;border-radius:5px}";
	m_Btn->setStyleSheet(pushButtonSytle);

	//m_Btn�����У�pushButtonSytle2��Ч��pushButtonSytle��������Ч
	QString pushButtonSytle2= "QPushButton{color:red; }";
	m_Btn->setStyleSheet(pushButtonSytle2);
}

MyFirstCustomWidget::~MyFirstCustomWidget()
{
}
