#include "rentaldetails.h"
#include <iostream>

RentalDetails::RentalDetails()
{
    std::cout<<"Rental Constructor Called"<<std::endl;
}

RentalDetails::~RentalDetails()
{
    std::cout<<"Rental Destructor Called"<<std::endl;
}

RentalDetails::RentalDetails(std::string customerName, std::string contactNumber, std::string vehicleType, int rentDuration, RentalVehicles* vehicle, PaymentMode *payment)
{
    std::cout<<"Rental Parameter Constructor Called"<<std::endl;
    this->m_customerName = customerName;
    this->m_contactNumber = contactNumber;
    this->m_vehicleType = vehicleType;
    this->m_rentDuration = rentDuration;
    this->m_vehicle = vehicle;
    this->m_payment = payment;
}

std::string RentalDetails::getCustomerName()
{
    return m_customerName;
}

std::string RentalDetails::getContactNumber()
{
    return m_contactNumber;
}

int RentalDetails::getRentDuration()
{
    return m_rentDuration;
}

std::string RentalDetails::getVehicleType()
{
    return m_vehicleType;
}

void RentalDetails::setVehicleType(std::string type)
{
    this->m_vehicleType = type;
}

RentalVehicles* RentalDetails::getRentalVehicleDetails()
{
    return m_vehicle;
}

PaymentMode *RentalDetails::getPaymentMode()
{
    return m_payment;
}
