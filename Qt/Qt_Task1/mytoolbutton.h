#ifndef MYTOOLBUTTON_H
#define MYTOOLBUTTON_H

#include <QToolButton>
class MyToolButton:public QToolButton
{
public:
    MyToolButton();
    ~MyToolButton();

    void paintEvent(QPaintEvent *event);
    bool event(QEvent *e);
};

#endif // MYTOOLBUTTON_H
