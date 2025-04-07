#ifndef ABC_H
#define ABC_H

#include <QWidget>
#include <QPaintEvent>
class ABC:public QWidget
{
public:
    ABC();
    ~ABC();

    virtual void paintEvent(QPaintEvent *event);
};

#endif // ABC_H
