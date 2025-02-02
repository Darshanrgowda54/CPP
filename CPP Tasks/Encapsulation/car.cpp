#include "car.h"
#include <iostream>

Car::Car()
{
    std::cout<<"Constructor Called"<<std::endl;
}

Car::~Car()
{
    std::cout<<"Destructor Called"<<std::endl;
}

int Car::getwheel()
{
    return m_wheel;
}


void Car::setwheel(int wheel)
{
    this->m_wheel = wheel;
}
