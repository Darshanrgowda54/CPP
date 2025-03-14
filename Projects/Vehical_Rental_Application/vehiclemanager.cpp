#include "vehiclemanager.h"
#include <iostream>
#include "bike.h"

VehicleManager::VehicleManager()
{
    std::cout<<"VehicalManager Constructor Called"<<std::endl;
}

VehicleManager::~VehicleManager()
{
    std::cout<<"VehicalManager Destructor Called"<<std::endl;
}

void VehicleManager::addBike()
{
    std::cout<<"Add Bike Function Called"<<std::endl;

    float rentPrice = 0.0;
    std::string brand, model, vehicalNumber;

    std::cout<<"Enter Bike Brand: ";
    std::cin>>brand;
    std::cout<<"Enter Bike Model: ";
    std::cin>>model;
    std::cout<<"Enter Bike Number: ";
    std::cin>>vehicalNumber;
    std::cout<<"Enter Bike Rent Price: ";
    std::cin>>rentPrice;

    m_bikeList.push_back(Bike(brand,model,vehicalNumber,rentPrice));
}

// void VehicalManager::addCar()
// {
//     std::cout<<"Add Car Function Called"<<std::endl;

//     float rentPrice = 0.0;
//     std::string brand, model, vehicalNumber;

//     std::cout<<"Enter Car Brand: ";
//     std::cin>>brand;
//     std::cout<<"Enter Car Model: ";
//     std::cin>>model;
//     std::cout<<"Enter Car Number: ";
//     std::cin>>vehicalNumber;
//     std::cout<<"Enter Car Rent Price: ";
//     std::cin>>rentPrice;

//     //m_carList->push_back(Car(brand,model,vehicalNumber,rentPrice));
// }

void VehicleManager::displayListOfBikes()
{
    std::cout<<"Bike Display Function Called"<<std::endl;

    for(auto i = m_bikeList.begin(); i != m_bikeList.end(); i++)
    {
        std::cout << "Bike Brand: " << i->getBrand() << std::endl;
        std::cout << "Bike Model: " << i->getModel() << std::endl;
        std::cout << "Bike Number: " << i->getVehicleNumber() << std::endl;
        std::cout << "Bike Rent Price: " << i->getRentPrice() << std::endl;
    }
}
