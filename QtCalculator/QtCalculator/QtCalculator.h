#pragma once

#include <QtWidgets/QWidget>
#include "ui_QtCalculator.h"
#include "CalculatorModel.h"

class QtCalculator : public QWidget
{
    Q_OBJECT

public:
    QtCalculator(QWidget *parent = Q_NULLPTR);

private slots:
	void getBtn0();
	void getBtn1();
	void getBtn2();
	void getBtn3();
	void getBtn4();
	void getBtn5();
	void getBtn6();
	void getBtn7();
	void getBtn8();
	void getBtn9();
	void onAdd();
	void onSub();
	void onDiv();
	void onMul();
	void onEqual();
	void onClear();

private:
    Ui::QtCalculatorClass ui;
	QString temp;
	CalculatorModel *pModel;
};
