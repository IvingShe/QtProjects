#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MyTimer.h"
#include <QTime>
#include <QTimer>

class MyTimer : public QMainWindow
{
    Q_OBJECT

public:
    MyTimer(QWidget *parent = Q_NULLPTR);

private slots:
	void onUpdateTime();

	void onStart();
	void onLog();
	void onPause();
	void Stop();

private:
    Ui::MyTimerClass ui;
	QTime mBaseTime;
	QTimer *pTimer;
};
