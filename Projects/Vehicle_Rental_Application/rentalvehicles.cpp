#include "rentalvehicles.h"
#include <iostream>

RentalVehicles::RentalVehicles()
{
    std::cout<<"Vehicle Constructor Called"<<std::endl;
}

RentalVehicles::~RentalVehicles()
{
    std::cout<<"Vehicle Destructor Called"<<std::endl;
}

RentalVehicles::RentalVehicles(std::string brand, std::string model, std::string vehicleNumber, std::string status, float rentPrice)
{
    std::cout<<"Vehicle Parameter Constructor Called"<<std::endl;
    this->m_brand = brand;
    this->m_model = model;
    this->m_vehicleNumber = vehicleNumber;
    this->m_status = status;
    this->m_rentPrice = rentPrice;
}

std::string RentalVehicles::getBrand()
{
    return m_brand;
}

std::string RentalVehicles::getModel()
{
    return m_model;
}

std::string RentalVehicles::getVehicleNumber()
{
    return m_vehicleNumber;
}

float RentalVehicles::getRentPrice()
{
    return m_rentPrice;
}

std::string RentalVehicles::getStatus()
{
    return m_status;
}

void RentalVehicles::setRentPrice(float rentPrice)
{
    this->m_rentPrice = rentPrice;
}

void RentalVehicles::setStatus(std::string status)
{
    this->m_status = status;
}

void RentalVehicles::setBrand(std::string brand)
{
    this->m_brand = brand;
}

void RentalVehicles::setModel(std::string model)
{
    this->m_model = model;
}

void RentalVehicles::setVehicleNumber(std::string vehicelNimber)
{
    this->m_vehicleNumber = vehicelNimber;
}
