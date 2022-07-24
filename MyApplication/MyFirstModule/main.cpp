#include "MyFirstModule.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyFirstModule w;
    w.show();
    return a.exec();
}
