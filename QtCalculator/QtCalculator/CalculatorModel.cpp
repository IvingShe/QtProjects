#include "CalculatorModel.h"

CalculatorModel::CalculatorModel() {
	this->num1 = 0;
	this->num2 = 0;
};

CalculatorModel::~CalculatorModel() {

};

void CalculatorModel::setNum1(int num) {
	this->num1 = num;
}

void  CalculatorModel::setNum2(int num) {
	this->num2= num;
}

void  CalculatorModel::setFlag(QString flag) {
	this->flag = flag;
}

QString  CalculatorModel::calculate() {
	int result = 0;

		if (this->flag=="+") {
			result = num1 + num2;
		}else if (this->flag == "-") {
			result = num1 - num2;
		}
		else if (this->flag == "*") {
			result = num1 * num2;
		}
		else if (this->flag == "/" ){
			if (num2 == 0) {
				return "Error";
			}
			result = num1 / num2;
		}
		else {
			result = num1;
		}
	return QString::number(result);
}