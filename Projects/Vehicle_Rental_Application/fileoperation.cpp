#include "fileoperation.h"
#include "admin.h"
#include "user.h"
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

void FileOperation::writeCarData(std::list<RentalCars*> carList)
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

void FileOperation::writeBikeData(std::list<RentalBikes*> bikeList)
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

std::list<RentalCars*> FileOperation::readCarData()
{
    std::cout<<"CSV Car ReadData Function Called"<<std::endl;

    std::list<RentalCars*> carlist;
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
        carlist.push_back(new RentalCars(brand, model, vehicleNumber,status, rentPrice));
        csvCarFile.ignore();
    }
    csvCarFile.close();
    return carlist;
}


std::list<RentalBikes*> FileOperation::readBikeData()
{
    std::cout<<"CSV Bike ReadData Function Called"<<std::endl;

    std::list<RentalBikes*> bikeList;
    std::ifstream csvBikeFile("BikeListData.csv");

    if (!csvBikeFile.is_open())
    {
        std::cerr << "Error: Could not open BikeListData.csv" << std::endl;
        return bikeList;
    }

    std::string brand, model, vehicleNumber,status;
    float rentPrice;

    while(std::getline(csvBikeFile,brand,',') && std::getline(csvBikeFile,model,',') && std::getline(csvBikeFile,vehicleNumber,',')
           && std::getline(csvBikeFile,status,',') && csvBikeFile>>rentPrice)
    {
        bikeList.push_back(new RentalBikes(brand, model, vehicleNumber, status, rentPrice));
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
                      << rent->getRentalVehicleDetails()->getBrand() << ","
                      << rent->getRentalVehicleDetails()->getModel() << ","
                      << rent->getRentalVehicleDetails()->getVehicleNumber() << ","
                      << rent->getRentalVehicleDetails()->getStatus() << ","
                      << rent->getRentalVehicleDetails()->getRentPrice() << ","
                      << rent->getPaymentMode()->getPaidAmount() << ","
                      << rent->getPaymentMode()->getBalanceAmount() << ","
                      << rent->getPaymentMode()->getPaymentType() << ","
                      << rent->getPaymentMode()->getPaymentStatus() << " ,"
                      << rent->getPaymentMode()->getPaymentID() <<std::endl;
    }
    csvRentalFile.close();
}


std::list<RentalDetails*> FileOperation::readRentalHistory()
{
    std::cout<<"CSV Read Rental History Function Called"<<std::endl;

    std::list<RentalDetails*> rentalHistory;
    std::ifstream csvRentalFile("RentalHistory.csv");
    std::string customerName, contactNumber, vehicleType, brand, model, vehicleNumber,status, paymentType, paymentStatus, paymentID;
    int rentDuration;
    float rentPrice, paidAmount, balanceAmount;

    while (std::getline(csvRentalFile, customerName, ',') &&
           std::getline(csvRentalFile, contactNumber, ',') &&
           std::getline(csvRentalFile, vehicleType, ',') &&
           (csvRentalFile >> rentDuration) && csvRentalFile.ignore() &&
           std::getline(csvRentalFile, brand, ',') &&
           std::getline(csvRentalFile, model, ',') &&
           std::getline(csvRentalFile, vehicleNumber, ',') &&
           std::getline(csvRentalFile,status,',') &&
           (csvRentalFile >> rentPrice) && csvRentalFile.ignore() &&
           (csvRentalFile >> paidAmount) && csvRentalFile.ignore() &&
           (csvRentalFile >> balanceAmount) && csvRentalFile.ignore() &&
           std::getline(csvRentalFile,paymentType,',') &&
           std::getline(csvRentalFile,paymentStatus,',') &&
           std::getline(csvRentalFile,paymentID))
    {
        RentalVehicles* vehicle = new RentalVehicles(brand, model, vehicleNumber,status,rentPrice);
        PaymentMode* payment = new PaymentMode(paidAmount, balanceAmount, paymentType, paymentStatus, paymentID);
        rentalHistory.push_back(new RentalDetails(customerName, contactNumber, vehicleType, rentDuration, vehicle, payment));
    }
    csvRentalFile.close();
    return rentalHistory;
}

void FileOperation::writeAdminData(std::list<Admin*> adminList)
{
    std::cout<<"CSV Admin WriteData Function Called"<<std::endl;

    std::string Id,password,name;

    std::ofstream csvAdminFile("AdminDataList.csv");

    for(auto& admin : adminList)
    {
        csvAdminFile<<admin->getId()<< ","
                    <<admin->getPassword()<< ","
                    <<admin->getName()<<std::endl;
    }
    csvAdminFile.close();
}

std::list<Admin*> FileOperation::readAdminData()
{
    std::cout<<"CSV Admin ReadData Function Called"<<std::endl;

    std::list<Admin*> adminlist;
    std::ifstream csvAdminFile("AdminDataList.csv");
    std::string Id,password,name;

    while(std::getline(csvAdminFile,Id,',') &&
           std::getline(csvAdminFile,password,',') &&
           std::getline(csvAdminFile,name))
    {
        // for(auto& admin : adminlist)
        // {
        //     std::cout<<admin->getName();
        // }
        adminlist.push_back(new Admin(Id,password,name));
    }
    csvAdminFile.close();
    return adminlist;
}

void FileOperation::writeUserData(std::list<User*> userList)
{
    std::cout<<"CSV User WriteData Function Called"<<std::endl;

    std::string name,password,contactNumber,emailId;

    std::ofstream csvUserFile("UserDataList.csv");

    for(auto& user : userList)
    {
        csvUserFile<<user->getName()<< ","
                     <<user->getPassword()<< ","
                     <<user->getContactNumber()<< ","
                     <<user->getEmailId()<<std::endl;
    }
    csvUserFile.close();
}

std::list<User*> FileOperation::readUserData()
{
    std::cout<<"CSV User ReadData Function Called"<<std::endl;

    std::list<User*> userList;
    std::ifstream csvUserFile("UserDataList.csv");
    std::string name,password,contactNumber,emailId;

    while(std::getline(csvUserFile,name,',') &&
           std::getline(csvUserFile,password,',') &&
           std::getline(csvUserFile,contactNumber,',') &&
           std::getline(csvUserFile,emailId))
    {
        userList.push_back(new User(name,password,contactNumber,emailId));
    }
    csvUserFile.close();
    return userList;
}


