#include "car.h"
#include <iostream>

Car::Car()
{
    std::cout<<"Car Constructor Called"<<std::endl;
}

Car::~Car()
{
    std::cout<<"Car Destructor Called"<<std::endl;
}

void Car::start()
{
    std::cout<<"Car Start"<<std::endl;
    E1.start();
}

void Car::stop()
{
    std::cout<<"Car Stop"<<std::endl;
    E1.stop();
}
