#include "mypushbutton.h"
#include <QDebug>

MyPushButton::MyPushButton()
{
    qDebug()<<"MyPushButton Constructor Called";
}

MyPushButton::~MyPushButton()
{
    qDebug()<<"MyPushButton Destructor Called";
}

void MyPushButton::paintEvent(QPaintEvent *event)
{
    qDebug()<<"MyPushButton PaintEvent Function Called";
    QPushButton::paintEvent(event);
}

bool MyPushButton::event(QEvent *e)
{
    qDebug()<<"MyPushButton Event Function Called";
    return QPushButton::event(e);
}
