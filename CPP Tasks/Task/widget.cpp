#include "widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    qDebug()<< "Widget Constructor Called";
}

Widget::~Widget()
{
    qDebug()<< "Widget Destructor Called";
}

void Widget::paintEvent(QPaintEvent *event)
{
    qDebug()<< "Widget PaintEvent Function Called";
}
