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

void FileOperation::writeCarData(std::list<Car> carList)
{
    std::cout<<"CSV Car WriteData Function Called"<<std::endl;
    std::ofstream csvCarFile("CarListData.csv");
    for(auto i = carList.begin();i != carList.end();i++)
    {
        csvCarFile<< i->getBrand()<< ","
                   <<i->getModel()<< ","
                   <<i->getVehicleNumber()<< ","
                   <<i->getRentPrice()<< ","
                   <<i->getStatus()<<std::endl;
    }
    csvCarFile.close();
}

void FileOperation::writeBikeData(std::list<Bike>bikeList)
{
    std::cout<<"CSV Bike WriteData Function Called"<<std::endl;
    std::ofstream csvBikeFile("BikeListData.csv");
    for(auto Bike = bikeList.begin();Bike != bikeList.end();Bike++)
    {
        csvBikeFile<< Bike->getBrand()<< ","
                    <<Bike->getModel()<< ","
                    <<Bike->getVehicleNumber()<< ","
                    <<Bike->getRentPrice()<< ","
                    <<Bike->getStatus()<<std::endl;
    }
    csvBikeFile.close();
}

std::list<Car> FileOperation::readCarData()
{
    std::cout<<"CSV Car ReadData Function Called"<<std::endl;

    std::list<Car> carlist;
    std::ifstream csvCarFile("CarListData.csv");
    float rentPrice;
    std::string brand, model, vehicleNumber,status;

    while(std::getline(csvCarFile,brand,',') && std::getline(csvCarFile,model,',')&& std::getline(csvCarFile,vehicleNumber,',')
           && csvCarFile>>rentPrice && csvCarFile.ignore() && std::getline(csvCarFile,status))
    {
        carlist.push_back(Car(brand, model, vehicleNumber, rentPrice,status));
    }
    csvCarFile.close();
    return carlist;
}


std::list<Bike> FileOperation::readBikeData()
{
    std::cout<<"CSV Bike ReadData Function Called"<<std::endl;

    std::list<Bike> bikeList;
    std::ifstream csvBikeFile("BikeListData.csv");
    float rentPrice;
    std::string brand, model, vehicleNumber,status;

    while(std::getline(csvBikeFile,brand,',') && std::getline(csvBikeFile,model,',')&& std::getline(csvBikeFile,vehicleNumber,',')
           && csvBikeFile>>rentPrice && csvBikeFile.ignore() && std::getline(csvBikeFile,status))
    {
        bikeList.push_back(Bike(brand, model, vehicleNumber, rentPrice,status));
    }
    csvBikeFile.close();
    return bikeList;
}


void FileOperation::writeRentalHistory(std::list<RentalDetails> rentalHistory)
{
    std::cout<<"CSV Write Rental History Function Called"<<std::endl;

    std::ofstream csvRentalFile("RentalHistory.csv");

    for(auto i = rentalHistory.begin();i != rentalHistory.end();i++)
    {
        csvRentalFile<< i->getCustomerName()<<","
                   <<i->getContactNumber()<<","
                   <<i->getVehicleNumber()<<","
                   <<i->getStatus()<<","
                   <<i->getRentDuration()<<std::endl;
    }
    csvRentalFile.close();
}


std::list<RentalDetails> FileOperation::readRentalHistory()
{
    std::cout<<"CSV Read Rental History Function Called"<<std::endl;

    std::list<RentalDetails> rentalHistory;
    std::ifstream csvRentalFile("RentalHistory.csv");
    std::string customerName, contactNumber, vehicleNumber, status;
    int rentDuration;

    while (std::getline(csvRentalFile, customerName, ',') &&std::getline(csvRentalFile, contactNumber, ',') &&
           std::getline(csvRentalFile, vehicleNumber, ',') &&std::getline(csvRentalFile, status, ',') &&
           csvRentalFile >> rentDuration && csvRentalFile.ignore())
    {
        rentalHistory.push_back(RentalDetails(customerName, contactNumber, vehicleNumber, status, rentDuration));
    }
    csvRentalFile.close();
    return rentalHistory;
}

