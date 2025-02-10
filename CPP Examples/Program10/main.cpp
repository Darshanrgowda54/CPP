#include "car.h"
#include <iostream>

using namespace std;


int main()
{
    // Car *Car1 = new Car;
    // *Car1->m_brand = "BMW";
    // *Car1->m_model = "M3";
    // Car1->display();
    // delete Car1;

    Car Car2(4,7);
    Car2.display();
    cout<<"Hello world"<<endl;
    return 0;
}


