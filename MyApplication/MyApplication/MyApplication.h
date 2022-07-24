#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MyApplication.h"

class MyApplication : public QMainWindow
{
    Q_OBJECT

public:
    MyApplication(QWidget *parent = Q_NULLPTR);

private:
    Ui::MyApplicationClass ui;
};
