#include "t1.h"
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    t1 w;
    w.show();
    QPushButton hello("Hello world!");
    hello.resize(100,30);

    hello.show();
    return a.exec();
}
