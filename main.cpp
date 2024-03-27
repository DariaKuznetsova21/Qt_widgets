#include <QCoreApplication>

#include "win.h"

int main(int argc, char *argv[])
{
    QApplication appl(argc, argv);
    Win win;
    win.show();
    return appl.exec();
}
