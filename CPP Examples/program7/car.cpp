#include "car.h"
#include <iostream>

Car::Car()
{

    std::cout<<this<<std::endl;
    std::cout<<this<<std::endl;

    std::cout<<this->a<<"*"<<std::endl;
    this->a = 40;
    std::cout<<this->a<<std::endl;

    std::cout<<this->b<<"*"<<std::endl;
    this->b = 30;
    std::cout<<this->b<<std::endl;

    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;
}

Car::Car(std::string model, std::string brand)
{
    this->model = model;
    this->brand = brand;

    std::cout<<model<<std::endl;
    std::cout<<brand<<std::endl;
}


