#include "mycheckbox.h"
#include "mypushbutton.h"
#include "myradiobutton.h"
#include "myscrollbar.h"
#include "myslider.h"
#include "mytoolbutton.h"
#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    MyPushButton* mypushbutton = new MyPushButton;
    mypushbutton->show();

    MyCheckBox* mycheckbox = new MyCheckBox;
    mycheckbox->show();

    MyRadioButton* myradiobutton = new MyRadioButton;
    myradiobutton->show();

    MyScrollBar* myscrollbar = new MyScrollBar;
    myscrollbar->show();

    MySlider* myslider = new MySlider;
    myslider->show();

    MyToolButton* mytoolButton = new MyToolButton;
    mytoolButton->show();

    // delete mypushbutton;
    // delete mycheckbox;
    // delete myradiobutton;
    return a.exec();
}





