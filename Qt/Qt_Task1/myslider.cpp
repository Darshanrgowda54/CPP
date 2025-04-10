#include "myslider.h"

MySlider::MySlider()
{
    qDebug()<<"MySlider Constructor Called";
    setFixedSize(250,250);
}

MySlider::~MySlider()
{
    qDebug()<<"MySlider Destructor Called";
}

void MySlider::paintEvent(QPaintEvent *event)
{
    qDebug()<<"MySlider Event Function Called";
    QSlider::paintEvent(event);
}

bool MySlider::event(QEvent *e)
{
    qDebug()<<"MySlider Event Function Called";
    return QSlider::event(e);
}
