#ifndef MYSLIDER_H
#define MYSLIDER_H

#include <QSlider>
class MySlider:public QSlider
{
public:
    MySlider();
    ~MySlider();

    void paintEvent(QPaintEvent *event);
    bool event(QEvent *e);
};

#endif // MYSLIDER_H
