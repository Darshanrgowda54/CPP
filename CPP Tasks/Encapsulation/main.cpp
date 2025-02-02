//Task Done using Setter and getter function.
//getter used to get the value of varible member.
//setter
#include "car.h"
#include <iostream>

using namespace std;

int main()
{
    Car C1;
    C1.getwheel();
    cout<<"Before :"<<C1.getwheel()<<endl;
    C1.setwheel(4);
    cout<<"After :"<<C1.getwheel()<<endl;
    return 0;
}
