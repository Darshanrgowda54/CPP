#ifndef MYSCROLLBAR_H
#define MYSCROLLBAR_H

#include <QScrollBar>
class MyScrollBar:public QScrollBar
{
public:
    MyScrollBar();
    ~MyScrollBar();

    void paintEvent(QPaintEvent *event);
    bool event(QEvent *e);
};

#endif // MYSCROLLBAR_H
