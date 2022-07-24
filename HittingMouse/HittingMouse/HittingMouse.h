#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_HittingMouse.h"
#include "MyGraphicsScenes.h"

class HittingMouse : public QMainWindow
{
    Q_OBJECT

public:
    HittingMouse(QWidget *parent = Q_NULLPTR);

private:
    Ui::HittingMouseClass ui;
	MyGraphicsScenes *pScenes;
};
