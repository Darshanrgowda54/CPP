#include "vehicle.h"
#include <iostream>


Vehicle::Vehicle()
{
    std::cout<<"Constructor Vehicle Called Default"<<std::endl;
}

Vehicle::Vehicle(int wheels, int mirrors):m_wheels(wheels),m_mirrors(mirrors)
{
    std::cout<<"Constructor Vehicle Called"<<std::endl;
    std::cout<<"Wheels :"<<m_wheels<<std::endl;
    std::cout<<"Mirrors :"<<m_mirrors<<std::endl;
}

Vehicle::~Vehicle()
{
    std::cout<<"Destructor Vehicle Called"<<std::endl;
}
