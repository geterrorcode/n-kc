#include "nkeepcleaner.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NKeepCleaner w;
    w.show();
    return a.exec();
}
