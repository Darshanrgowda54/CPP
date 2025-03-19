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

Car::Car(std::string brand, std::string model, std::string vehicleNumber, std::string status, float rentPrice)
{
    std::cout<<"Car Parameter Constructor Called"<<std::endl;
    this->m_brand = brand;
    this->m_model = model;
    this->m_vehicleNumber = vehicleNumber;
    this->m_status = status;
    this->m_rentPrice = rentPrice;
}
