#include "ABC.h"
#include "DBC.h"
#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    w.paintEvent();

    ABC abc;
    abc.paintEvent();

    DBC dbc;
    dbc.paintEvent();

    return a.exec();
}
