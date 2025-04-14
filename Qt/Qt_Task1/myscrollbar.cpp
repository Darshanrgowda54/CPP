#include "myscrollbar.h"

MyScrollBar::MyScrollBar()
{
    qDebug()<<"MyScrollBar Constructor Called";
    setFixedSize(250,250);
}

MyScrollBar::~MyScrollBar()
{
    qDebug()<<"MyScrollBar Destructor Called";
}

void MyScrollBar::paintEvent(QPaintEvent *event)
{
    qDebug()<<"MyScrollBar Event Function Called";
    QScrollBar::paintEvent(event);
}

bool MyScrollBar::event(QEvent *e)
{
    qDebug()<<"MyScrollBar Event Function Called";
    return QScrollBar::event(e);
}
