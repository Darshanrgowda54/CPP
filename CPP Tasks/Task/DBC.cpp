#include "DBC.h"
#include <QDebug>

DBC::DBC()
{
    qDebug()<< "DBC Constructor Called";
}


DBC::~DBC()
{
    qDebug()<< "DBC Destructor Called";
}


void DBC::paintEvent()
{
    qDebug()<< "DBC PaintEvent Function Called";
}

