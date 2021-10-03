#include "QtCalculator.h"
#include <QDebug>
#include "CalculatorModel.h"

QtCalculator::QtCalculator(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
	connect(this->ui.btn_0, SIGNAL(clicked()), this, SLOT(getBtn0()));
	connect(this->ui.btn_1, SIGNAL(clicked()), this, SLOT(getBtn1()));
	connect(this->ui.btn_2, SIGNAL(clicked()), this, SLOT(getBtn2()));

	connect(this->ui.btn_3, SIGNAL(clicked()), this, SLOT(getBtn3()));
	connect(this->ui.btn_4, SIGNAL(clicked()), this, SLOT(getBtn4()));
	connect(this->ui.btn_5, SIGNAL(clicked()), this, SLOT(getBtn5()));
	connect(this->ui.btn_6, SIGNAL(clicked()), this, SLOT(getBtn6()));
	connect(this->ui.btn_7, SIGNAL(clicked()), this, SLOT(getBtn7()));
	connect(this->ui.btn_8, SIGNAL(clicked()), this, SLOT(getBtn8()));
	connect(this->ui.btn_9, SIGNAL(clicked()), this, SLOT(getBtn9()));

	//connect(this->ui.btn_2, SIGNAL(clicked()), this, SLOT(getBtn1()));
	//connect(this->ui.btn_2, SIGNAL(clicked()), this, SLOT(getBtn1()));

	connect(this->ui.btn_add, SIGNAL(clicked()), this, SLOT(onAdd()));
	connect(this->ui.btn_sub, SIGNAL(clicked()), this, SLOT(onSub()));
	connect(this->ui.btn_div, SIGNAL(clicked()), this, SLOT(onDiv()));
	connect(this->ui.btn_mul, SIGNAL(clicked()), this, SLOT(onMul()));
	connect(this->ui.btn_equal, SIGNAL(clicked()), this, SLOT(onEqual()));

	connect(this->ui.btn_clear, SIGNAL(clicked()), this, SLOT(onClear()));
	this->pModel = new CalculatorModel;
	this->temp = "";
}

void QtCalculator::getBtn0() {
	if (temp!="") {	
		temp += ui.btn_0->text();
		ui.lab_display->setText(temp);
	}	
}

void QtCalculator::getBtn1() {
	this->temp += ui.btn_1->text();
	ui.lab_display->setText(this->temp);
}

void QtCalculator::getBtn2() {
	
	this->temp += ui.btn_2->text();
	ui.lab_display->setText(this->temp);
}
void QtCalculator::getBtn3() {

	this->temp += ui.btn_3->text();
	ui.lab_display->setText(this->temp);
}
void QtCalculator::getBtn4() {

	this->temp += ui.btn_4->text();
	ui.lab_display->setText(this->temp);
}

void QtCalculator::getBtn5() {
	this->temp += ui.btn_5->text();
	ui.lab_display->setText(this->temp);
}
void QtCalculator::getBtn6() {
	this->temp += ui.btn_6->text();
	ui.lab_display->setText(this->temp);
}
void QtCalculator::getBtn7() {

	this->temp += ui.btn_7->text();
	ui.lab_display->setText(this->temp);
}

void QtCalculator::getBtn8() {
	
	this->temp += ui.btn_8->text();
	ui.lab_display->setText(this->temp);
}

void QtCalculator::getBtn9() {	
	this->temp += ui.btn_9->text(); 
	ui.lab_display->setText(this->temp);
}

void QtCalculator::onAdd() {
	pModel->setNum1(temp.toInt());
	temp = "";
	pModel->setFlag(ui.btn_add->text());
}

void  QtCalculator::onSub() {
	pModel->setNum1(temp.toInt());
	temp = "";
	pModel->setFlag(ui.btn_sub->text());
}


void QtCalculator::onDiv() {
	pModel->setNum1(temp.toInt());
	temp = "";
	pModel->setFlag(ui.btn_div->text());

}

void  QtCalculator::onMul() {
	pModel->setNum1(temp.toInt());
	temp = "";
	pModel->setFlag(ui.btn_mul->text());

}

void QtCalculator::onEqual() {
	pModel->setNum2(temp.toInt());
	QString result = pModel->calculate();
	ui.lab_display->setText(result);
	temp = "";
}

void  QtCalculator::onClear() {
	this->temp = "";
	ui.lab_display->setText("0");
}
