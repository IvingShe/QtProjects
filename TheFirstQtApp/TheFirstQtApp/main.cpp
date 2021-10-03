#include "TheFirstQtApp.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TheFirstQtApp w;
    w.show();
    return a.exec();
}
