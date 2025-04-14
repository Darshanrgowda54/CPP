#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    qDebug()<<"My QWidget Constructor Called";
}

Widget::~Widget()
{
    qDebug()<<"My QWidget Destructor Called";
}
