#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MyFirstModule.h"

class MyFirstModule : public QMainWindow
{
    Q_OBJECT

public:
    MyFirstModule(QWidget *parent = Q_NULLPTR);

private:
    Ui::MyFirstModuleClass ui;
};
