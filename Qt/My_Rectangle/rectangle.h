#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <QWidget>
#include <QRect>

class Rectangle : public QWidget
{
    Q_OBJECT

public:
    Rectangle(QWidget *parent = nullptr);
    ~Rectangle();

    void paintEvent(QPaintEvent* event) override;

private:
    //QRect rectangle;
};
#endif // RECTANGLE_H
