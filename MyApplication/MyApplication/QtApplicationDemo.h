#pragma once
#include<iostream>
#include <QApplication>

class QtApplicationDemo  : public QApplication
{
	Q_OBJECT

public:
	QtApplicationDemo(int &argc, char **argv);
	//QtApplicationDemo(QObject *parent);
	~QtApplicationDemo();
};
