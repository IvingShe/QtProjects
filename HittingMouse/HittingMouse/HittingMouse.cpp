#include "HittingMouse.h"

HittingMouse::HittingMouse(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	pScenes =new MyGraphicsScenes(parent);
	//
	ui.graphicsView->setScene(pScenes);
}
