#include "unzasumainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UnzasuMainWindow w;
    w.show();
    return a.exec();
}
