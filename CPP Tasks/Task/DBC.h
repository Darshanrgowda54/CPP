#ifndef DBC_H
#define DBC_H

#include "ABC.h"
class DBC:public ABC
{
public:
    DBC();
    ~DBC();

    void paintEvent(QPaintEvent *event);
};

#endif // DBC_H
