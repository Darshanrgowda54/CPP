#include "ABC.h"
#include "DBC.h"
#include "widget.h"
#include <QApplication>
#include <QPainter>
#include <QDebug>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.resize(400,400);
    w.show();

    ABC abc;
    abc.resize(300,300);
    abc.show();

    DBC dbc;
    dbc.resize(200,200);
    dbc.show();

    // ABC* ptr = new DBC();
    // ptr->resize(200, 200);
    // ptr->show();


    return a.exec();
}


