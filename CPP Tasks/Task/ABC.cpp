#include "ABC.h"
#include <QDebug>

ABC::ABC()
{
    qDebug()<<"ABC Constructor Called";
}

ABC::~ABC()
{
    qDebug()<<"ABC Destructor Called";
}

void ABC::paintEvent(QPaintEvent *event)
{
    qDebug()<<"ABC PaintEvent Function Called";
}

