#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TheFirstQtApp.h"

class TheFirstQtApp : public QMainWindow
{
    Q_OBJECT

public:
    TheFirstQtApp(QWidget *parent = Q_NULLPTR);

public slots:
	void login();

private:
    Ui::TheFirstQtAppClass ui;
};
