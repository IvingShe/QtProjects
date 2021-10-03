#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_HittingMouse.h"

class HittingMouse : public QMainWindow
{
    Q_OBJECT

public:
    HittingMouse(QWidget *parent = Q_NULLPTR);

private:
    Ui::HittingMouseClass ui;
};
