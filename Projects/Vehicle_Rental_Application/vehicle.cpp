#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle()
{
    std::cout<<"Vehical Constructor Called"<<std::endl;
}

Vehicle::~Vehicle()
{
    std::cout<<"Vehical Destructor Called"<<std::endl;
}

Vehicle::Vehicle(std::string brand, std::string model, std::string vehicleNumber, float rentPrice):m_brand(std::move(brand)),
    m_model(std::move(model)), m_vehicleNumber(std::move(vehicleNumber)), m_rentPrice(rentPrice)
{

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

void Vehicle::setRentPrice(float rentPrice)
{
    this->m_rentPrice = rentPrice;
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
