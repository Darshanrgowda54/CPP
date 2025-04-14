#include "mytoolbutton.h"

MyToolButton::MyToolButton()
{
    qDebug()<<"MyToolButton Constructor Called";
}

MyToolButton::~MyToolButton()
{
    qDebug()<<"MyToolButton Destructor Called";
}

void MyToolButton::paintEvent(QPaintEvent *event)
{
    qDebug()<<"MyToolButton Event Function Called";
    QToolButton::paintEvent(event);
}

bool MyToolButton::event(QEvent *e)
{
    qDebug()<<"MyToolButton Event Function Called";
    return QToolButton::event(e);
}
