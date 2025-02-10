#include "electriccar.h"
#include <iostream>


ElectricCar::ElectricCar():Vehicle()
{
    std::cout<<"Constructor ElectricCar Called"<<std::endl;
}

ElectricCar::~ElectricCar()
{
    std::cout<<"Destructor ElectricCar Called"<<std::endl;
}
