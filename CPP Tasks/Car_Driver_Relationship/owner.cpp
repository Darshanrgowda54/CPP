#include "owner.h"
#include "car.h"
#include <iostream>

Owner::Owner()
{
    std::cout<<"Owner Constructor Called"<<std::endl;
    this->m_car =  new Car;
    //m_car->setBrand("Bmw");
}

Owner::~Owner()
{
    std::cout<<"Owner Destructor Called"<<std::endl;
}


void Owner::assignDriver(Driver* d)
{
    std::cout<<"Owner Assigned Driver to Car Fucntion Called"<<std::endl;
    //this->m_driver = d;
    this->m_car->setDriver(d);
}


