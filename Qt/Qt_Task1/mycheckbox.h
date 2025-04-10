#ifndef MYCHECKBOX_H
#define MYCHECKBOX_H

#include <QCheckBox>
class MyCheckBox:public QCheckBox
{
public:
    MyCheckBox();
    ~MyCheckBox();

    void paintEvent(QPaintEvent *event);
    bool event(QEvent *e);
};

#endif // MYCHECKBOX_H
