#include "rectangle.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Rectangle rec;
    rec.show();
    //qDebug()<<&rec;
    return a.exec();
}
