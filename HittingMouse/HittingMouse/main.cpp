#include "HittingMouse.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HittingMouse w;
    w.show();
    return a.exec();
}
