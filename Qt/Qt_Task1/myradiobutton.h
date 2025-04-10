#ifndef MYRADIOBUTTON_H
#define MYRADIOBUTTON_H

#include <QRadioButton>
class MyRadioButton:public QRadioButton
{
public:
    MyRadioButton();
    ~MyRadioButton();

    void paintEvent(QPaintEvent *event);
    bool event(QEvent *e);
};

#endif // MYRADIOBUTTON_H
