#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class Widget : public QWidget/*, QPaintDevice*/
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void paintEvent();
};
#endif // WIDGET_H
