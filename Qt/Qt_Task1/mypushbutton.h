#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H
#include <QPushButton>

class MyPushButton:public QPushButton
{
public:
    MyPushButton();
    ~MyPushButton();

    void paintEvent(QPaintEvent *event);
    bool event(QEvent *e);
};

#endif // MYPUSHBUTTON_H
