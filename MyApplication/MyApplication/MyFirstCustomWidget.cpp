#include "MyFirstCustomWidget.h"


MyFirstCustomWidget::MyFirstCustomWidget(QWidget *parent)
	: QWidget(parent)
{
	//ui.setupUi(this);
	m_Btn = new QPushButton(this);
	m_Btn->setText("Hello ,Qt!");
	m_Btn->setGeometry(50,50, 200, 50);
	//设置子窗口控件样式：背景颜色和字体颜色
	QString widgetStyle= "QWidget{background:yellow;}  QPushButton{background:blue;color:red;} ";	//
	this->setStyleSheet(widgetStyle);

	//设置子窗口中某一个控件的样式：字体颜色，边线和圆角
	QString pushButtonSytle = "QPushButton{color:white; border:3px solid green;border-radius:5px}";
	m_Btn->setStyleSheet(pushButtonSytle);

	//m_Btn对象中，pushButtonSytle2生效，pushButtonSytle将不在生效
	QString pushButtonSytle2= "QPushButton{color:red; }";
	m_Btn->setStyleSheet(pushButtonSytle2);
}

MyFirstCustomWidget::~MyFirstCustomWidget()
{
}
