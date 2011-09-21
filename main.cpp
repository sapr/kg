#include <QtGui/QApplication>
#include "kg.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    kg w;
    w.show();
    int aa;
    return a.exec();
}
