#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle()
{
    std::cout<<"Vehicle Constructor Called"<<std::endl;
}

Vehicle::~Vehicle()
{
    std::cout<<"Vehicle Destructor Called"<<std::endl;
}

Vehicle::Vehicle(std::string brand, std::string model, std::string vehicleNumber, std::string status, float rentPrice)
{
    std::cout<<"Vehicle Parameter Constructor Called"<<std::endl;
    this->m_brand = brand;
    this->m_model = model;
    this->m_vehicleNumber = vehicleNumber;
    this->m_status = status;
    this->m_rentPrice = rentPrice;
}

std::string Vehicle::getBrand()
{
    return m_brand;
}

std::string Vehicle::getModel()
{
    return m_model;
}

std::string Vehicle::getVehicleNumber()
{
    return m_vehicleNumber;
}

float Vehicle::getRentPrice()
{
    return m_rentPrice;
}

std::string Vehicle::getStatus()
{
    return m_status;
}

void Vehicle::setRentPrice(float rentPrice)
{
    this->m_rentPrice = rentPrice;
}

void Vehicle::setStatus(std::string status)
{
    this->m_status = status;
}

void Vehicle::setBrand(std::string brand)
{
    this->m_brand = brand;
}

void Vehicle::setModel(std::string model)
{
    this->m_model = model;
}

void Vehicle::setVehicleNumber(std::string vehicelNimber)
{
    this->m_vehicleNumber = vehicelNimber;
}
