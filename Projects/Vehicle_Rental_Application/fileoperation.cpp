#include "fileoperation.h"
#include <iostream>
#include <fstream>

FileOperation::FileOperation()
{
    std::cout<<"FileOperation Constructor Called"<<std::endl;
}

FileOperation::~FileOperation()
{
    std::cout<<"FileOperation Destructor Called"<<std::endl;
}

void FileOperation::writeCarData(std::list<Car*> carList)
{
    std::cout<<"CSV Car WriteData Function Called"<<std::endl;
    std::ofstream csvCarFile("CarListData.csv");

    for(auto& car : carList)
    {
        csvCarFile<<car->getBrand()<< ","
                   <<car->getModel()<< ","
                   <<car->getVehicleNumber()<< ","
                   <<car->getStatus()<< ","
                   <<car->getRentPrice()<<std::endl;
    }
    csvCarFile.close();
}

void FileOperation::writeBikeData(std::list<Bike*> bikeList)
{
    std::cout<<"CSV Bike WriteData Function Called"<<std::endl;
    std::ofstream csvBikeFile("BikeListData.csv");

    for(auto& Bike : bikeList)
    {
        csvBikeFile<< Bike->getBrand()<< ","
                    <<Bike->getModel()<< ","
                    <<Bike->getVehicleNumber()<< ","
                    <<Bike->getStatus()<< ","
                    <<Bike->getRentPrice()<<std::endl;
    }
    csvBikeFile.close();
}

std::list<Car*> FileOperation::readCarData()
{
    std::cout<<"CSV Car ReadData Function Called"<<std::endl;

    std::list<Car*> carlist;
    std::ifstream csvCarFile("CarListData.csv");

    if (!csvCarFile.is_open())
    {
        std::cerr << "Error: Could not open CarListData.csv" << std::endl;
        return carlist;
    }

    std::string brand, model, vehicleNumber,status;
    float rentPrice;

    while(std::getline(csvCarFile,brand,',') && std::getline(csvCarFile,model,',')&& std::getline(csvCarFile,vehicleNumber,',')
        && std::getline(csvCarFile,status,',') && csvCarFile>>rentPrice)
    {
        carlist.push_back(new Car(brand, model, vehicleNumber,status, rentPrice));
    }
    csvCarFile.close();
    return carlist;
}


std::list<Bike*> FileOperation::readBikeData()
{
    std::cout<<"CSV Bike ReadData Function Called"<<std::endl;

    std::list<Bike*> bikeList;
    std::ifstream csvBikeFile("BikeListData.csv");

    if (!csvBikeFile.is_open())
    {
        std::cerr << "Error: Could not open CarListData.csv" << std::endl;
        return bikeList;
    }

    std::string brand, model, vehicleNumber,status;
    float rentPrice;

    while(std::getline(csvBikeFile,brand,',') &&
           std::getline(csvBikeFile,model,',') &&
           std::getline(csvBikeFile,vehicleNumber,',') &&
           std::getline(csvBikeFile,status,',') &&
           csvBikeFile>>rentPrice)
    {
        bikeList.push_back(new Bike(brand, model, vehicleNumber, status, rentPrice));
        csvBikeFile.ignore();
    }
    csvBikeFile.close();
    return bikeList;
}


void FileOperation::writeRentalHistory(std::list<RentalDetails*> rentalHistory)
{
    std::cout<<"CSV Write Rental History Function Called"<<std::endl;

    std::ofstream csvRentalFile("RentalHistory.csv");

    for(auto& rent : rentalHistory)
    {
        csvRentalFile << rent->getCustomerName() << ","
                      << rent->getContactNumber() << ","
                      << rent->getVehicleType() << ","
                      << rent->getRentDuration() << ","
                      << rent->getVehicleDetails()->getBrand() << ","
                      << rent->getVehicleDetails()->getModel() << ","
                      << rent->getVehicleDetails()->getVehicleNumber() << ","
                      << rent->getVehicleDetails()->getStatus() << ","
                      << rent->getVehicleDetails()->getRentPrice() << std::endl;
    }
    csvRentalFile.close();
}


std::list<RentalDetails*> FileOperation::readRentalHistory()
{
    std::cout<<"CSV Read Rental History Function Called"<<std::endl;

    std::list<RentalDetails*> rentalHistory;
    std::ifstream csvRentalFile("RentalHistory.csv");
    std::string customerName, contactNumber, vehicleType, brand, model, vehicleNumber,status;
    int rentDuration;
    float rentPrice;

    while (std::getline(csvRentalFile, customerName, ',') &&
           std::getline(csvRentalFile, contactNumber, ',') &&
           std::getline(csvRentalFile, vehicleType, ',') &&
           (csvRentalFile >> rentDuration) && csvRentalFile.ignore() &&
           std::getline(csvRentalFile, brand, ',') &&
           std::getline(csvRentalFile, model, ',') &&
           std::getline(csvRentalFile, vehicleNumber, ',') &&
           std::getline(csvRentalFile,status,',') &&
           (csvRentalFile >> rentPrice))
    {
        Vehicle* vehicle = new Vehicle(brand, model, vehicleNumber,status,rentPrice);
        rentalHistory.push_back(new RentalDetails(customerName, contactNumber, vehicleType, rentDuration, vehicle));
    }
    csvRentalFile.close();
    return rentalHistory;
}


