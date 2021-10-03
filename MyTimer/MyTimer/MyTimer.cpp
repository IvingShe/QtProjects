#include "MyTimer.h"

MyTimer::MyTimer(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	pTimer = new QTimer;
	
	connect(this->ui.btn_start, SIGNAL(clicked()), this, SLOT(onStart()));
	connect(this->ui.btn_start, SIGNAL(clicked()), this, SLOT(onLog()));
	connect(this->ui.btn_start, SIGNAL(clicked()), this, SLOT(onPause()));
	connect(this->ui.btn_start, SIGNAL(clicked()), this, SLOT(Stop()));
	connect(pTimer, SIGNAL(timeout()), this, SLOT(onUpdateTime()));

}

void MyTimer::onStart() {		
	pTimer->start(1);
	mBaseTime.setHMS(0, 0, 0, 0);
}

void MyTimer::onLog() {
}

void MyTimer::onPause() {

}

void MyTimer::Stop() {

}


void MyTimer::onUpdateTime() {
	mBaseTime = mBaseTime.addMSecs(1);
	QString content =mBaseTime.toString("hh:mm:ss:zzz");
	this->ui.lcdNumber->display(content);
}
