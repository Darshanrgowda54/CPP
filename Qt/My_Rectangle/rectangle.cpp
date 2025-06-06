#include "rectangle.h"
#include <QPainter>


Rectangle::Rectangle(QWidget *parent)
    : QWidget(parent)
{
    //rectangle = QRect(50,50,200,200);
}

Rectangle::~Rectangle() {}

void Rectangle::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter painter(this);
    //qDebug()<<this;


    painter.setPen(Qt :: black);
    painter.setBrush(Qt :: yellow);
    painter.drawRect(100,100,200,200);
}
