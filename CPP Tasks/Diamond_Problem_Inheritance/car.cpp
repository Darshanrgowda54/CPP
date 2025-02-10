#include "car.h"
#include <iostream>

Car::Car():Vehicle()
{
    std::cout<<"Constructor Car Called"<<std::endl;
}

Car::~Car()
{
    std::cout<<"Destructor Car Called"<<std::endl;
}
