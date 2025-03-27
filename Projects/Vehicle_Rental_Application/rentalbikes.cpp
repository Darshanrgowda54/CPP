#include "rentalbikes.h"
#include <iostream>

RentalBikes::RentalBikes()
{
    std::cout<<"Bike Constructor Called"<<std::endl;
}

RentalBikes::~RentalBikes()
{
    std::cout<<"Bike Destructor Called"<<std::endl;
}

RentalBikes::RentalBikes(std::string brand, std::string model, std::string vehicleNumber, std::string status, float rentPrice)
{
    std::cout<<"Bike Parameter Constructor Called"<<std::endl;
    this->m_brand = brand;
    this->m_model = model;
    this->m_vehicleNumber = vehicleNumber;
    this->m_status = status;
    this->m_rentPrice = rentPrice;
}



