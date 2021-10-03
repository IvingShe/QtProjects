#pragma once

#include <QString>
class CalculatorModel
{

public:
	CalculatorModel();
	~CalculatorModel();

	void setNum1(int num); 
	void setNum2(int num);
	void setFlag(QString flag);
	QString calculate();

private:
	int num1;
	int num2;
	QString flag;
};

