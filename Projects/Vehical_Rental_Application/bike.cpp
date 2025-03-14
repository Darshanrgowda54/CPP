#include "bike.h"
#include <iostream>

Bike::Bike()
{
    std::cout<<"Bike Constructor Called"<<std::endl;
}

Bike::~Bike()
{
    std::cout<<"Bike Destructor Called"<<std::endl;
}

Bike::Bike(std::string brand, std::string model, std::string vehicleNumber, float rentPrice)
{
    std::cout<<"Bike Parameter Constructor Called"<<std::endl;
    this->m_rentPrice = rentPrice;
    this->m_brand = brand;
    this->m_model = model;
    this->m_vehicleNumber = vehicleNumber;
}



