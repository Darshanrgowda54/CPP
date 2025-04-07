#ifndef ABC_H
#define ABC_H

#include "qwidget.h"
class ABC:public QWidget
{
public:
    ABC();
    ~ABC();

    void paintEvent();
};

#endif // ABC_H
