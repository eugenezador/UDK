#include "udk.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    udk w;
    w.show();
    return a.exec();
}
