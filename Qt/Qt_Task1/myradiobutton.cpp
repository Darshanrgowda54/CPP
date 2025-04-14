#include "myradiobutton.h"
#include "qdebug.h"

MyRadioButton::MyRadioButton()
{
    qDebug()<<"MyRadioButton Constructor Called";
}

MyRadioButton::~MyRadioButton()
{
    qDebug()<<"MyRadioButton Destructor Called";
}

void MyRadioButton::paintEvent(QPaintEvent *event)
{
    qDebug()<<"MyRadioButton PaintEvent Function Called";
    QRadioButton::paintEvent(event);
}

bool MyRadioButton::event(QEvent *e)
{
    qDebug()<<"MyRadioButton Event Function Called";
    return QRadioButton::event(e);
}
