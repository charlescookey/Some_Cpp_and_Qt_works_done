#include "end.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    End e;
    e.show();


    return a.exec();
}
