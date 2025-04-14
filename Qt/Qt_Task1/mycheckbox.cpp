#include "mycheckbox.h"
#include "qdebug.h"

MyCheckBox::MyCheckBox()
{
    qDebug()<<"MyCheckBox Constructor Called";
}

MyCheckBox::~MyCheckBox()
{
    qDebug()<<"MyCheckBox Destructor Called";
}

void MyCheckBox::paintEvent(QPaintEvent *event)
{
    qDebug()<<"MyCheckBox PaintEvent Function Called";
    QCheckBox::paintEvent(event);
}

bool MyCheckBox::event(QEvent *e)
{
    qDebug()<<"MyCheckBox Event Function Called";
    return QCheckBox::event(e);
    //return true;
}
