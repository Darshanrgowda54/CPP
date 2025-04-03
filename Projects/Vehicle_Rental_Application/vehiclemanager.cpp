#include "vehiclemanager.h"
#include <iostream>
#include "cash.h"
#include "upi.h"

VehicleManager::VehicleManager()
{
    std::cout<<"VehicleManager Constructor Called"<<std::endl;
    m_fileoperation = new FileOperation;

    m_bikeList = m_fileoperation->readBikeData();
    m_carList = m_fileoperation->readCarData();
    m_rentalHistory = m_fileoperation->readRentalHistory();
}


VehicleManager::~VehicleManager()
{
    std::cout<<"VehicleManager Destructor Called"<<std::endl;

    m_fileoperation->writeBikeData(m_bikeList);
    m_fileoperation->writeCarData(m_carList);
    m_fileoperation->writeRentalHistory(m_rentalHistory);

    for(auto bike : m_bikeList)
    {
        delete bike;
    }

    for(auto car : m_carList)
    {
        delete car;
    }

    for(auto i : m_rentalHistory)
    {
        delete i;
    }

    delete m_fileoperation;
}


void VehicleManager::addBike()
{
    std::cout<<"\nAdd Bike Function Called"<<std::endl;

    float rentPrice;
    std::string brand, model, vehicleNumber,status;

    std::cout<<"Enter Bike Brand: ";
    std::cin>>brand;
    std::cout<<"Enter Bike Model: ";
    std::cin>>model;
    std::cout<<"Enter Bike Number: ";
    std::cin>>vehicleNumber;
    std::cout<<"Enter Bike Status: ";
    std::cin>>status;
    std::cout<<"Enter Bike Rent Price: ";
    std::cin>>rentPrice;

    m_bikeList.push_back(new RentalBikes(brand,model,vehicleNumber,status,rentPrice));
}


void VehicleManager::addCar()
{
    std::cout<<"\nAdd Car Function Called"<<std::endl;

    float rentPrice;
    std::string brand, model, vehicleNumber,status;

    std::cout<<"Enter Car Brand: ";
    std::cin>>brand;
    std::cout<<"Enter Car Model: ";
    std::cin>>model;
    std::cout<<"Enter Car Number: ";
    std::cin>>vehicleNumber;
    std::cout<<"Enter Car Status: ";
    std::cin>>status;
    std::cout<<"Enter Car Rent Price: ";
    std::cin>>rentPrice;

    m_carList.push_back(new RentalCars(brand,model,vehicleNumber,status,rentPrice));
}

void VehicleManager::displayListOfBikes()
{
    std::cout<<"\nDisplay Bike Function Called"<<std::endl;

    //std::cout << std::left;
    //std::cout.fill('*');
    std::cout.setf(std::ios::left ,std::ios::adjustfield);
    std::cout.width(19);
    std::cout << "\nBrand";
    std::cout.width(34);
    std::cout << "Model";
    std::cout.width(23);
    std::cout << "Number";
    std::cout.width(24);
    std::cout << "Status";
    std::cout.width(15);
    std::cout << "RentPrice"<<std::endl;

    std::cout<<"-------------------------------------------------------------------------------------------------------------"<<std::endl;
    for(auto bike: m_bikeList)
    {
        std::cout.width(18);
        std::cout <<bike->getBrand();
        std::cout.width(34);
        std::cout <<bike->getModel();
        std::cout.width(23);
        std::cout <<bike->getVehicleNumber();
        std::cout.width(24);
        std::cout <<bike->getStatus();
        std::cout.width(15);
        std::cout <<bike->getRentPrice()<<std::endl;
    }
}


void VehicleManager::displayListOfCars()
{
    std::cout<<"\nDisplay Car Function Called"<<std::endl;

    //std::cout << std::left;
    std::cout.setf(std::ios::left ,std::ios::adjustfield);
    std::cout.width(19);
    std::cout << "\nBrand";
    std::cout.width(34);
    std::cout << "Model";
    std::cout.width(23);
    std::cout << "Number";
    std::cout.width(24);
    std::cout << "Status";
    std::cout.width(15);
    std::cout << "RentPrice"<<std::endl;

    std::cout<<"-------------------------------------------------------------------------------------------------------------"<<std::endl;
    for(auto car : m_carList)
    {
        std::cout.width(18);
        std::cout <<car->getBrand();
        std::cout.width(34);
        std::cout <<car->getModel();
        std::cout.width(23);
        std::cout <<car->getVehicleNumber();
        std::cout.width(24);
        std::cout <<car->getStatus();
        std::cout.width(15);
        std::cout <<car->getRentPrice()<<std::endl;
    }
}


void VehicleManager::sortBookedVehicle()
{
    std::cout<<"\nDisplay Booked Function Called"<<std::endl;

    std::cout<< "\n\t\t\t\tCar Booked List"<<std::endl;
    std::cout << std::left;
    std::cout.width(19);
    std::cout << "\nBrand";
    std::cout.width(34);
    std::cout << "Model";
    std::cout.width(23);
    std::cout << "Number";
    std::cout.width(24);
    std::cout << "Status"<<std::endl;
    for(auto car : m_carList)
    {
        if(car->getStatus() == "Booked")
        {
            std::cout.width(18);
            std::cout <<car->getBrand();
            std::cout.width(34);
            std::cout <<car->getModel();
            std::cout.width(23);
            std::cout <<car->getVehicleNumber();
            std::cout.width(24);
            std::cout <<car->getStatus()<<std::endl;
        }
    }

    std::cout<< "\n\n\t\t\t\tBike Booked List"<<std::endl;
    std::cout << std::left;
    std::cout.width(19);
    std::cout << "\nBrand";
    std::cout.width(34);
    std::cout << "Model";
    std::cout.width(23);
    std::cout << "Number";
    std::cout.width(24);
    std::cout << "Status"<<std::endl;
    for(auto bike : m_bikeList)
    {
        if(bike->getStatus() == "Booked")
        {
            std::cout.width(18);
            std::cout <<bike->getBrand();
            std::cout.width(34);
            std::cout <<bike->getModel();
            std::cout.width(23);
            std::cout <<bike->getVehicleNumber();
            std::cout.width(24);
            std::cout <<bike->getStatus()<<std::endl;
        }
    }
}


void VehicleManager::sortAvailableVehicle()
{
    sortByPrice();
    std::cout<<"\nDisplay Available Function Called"<<std::endl;

    std::cout<< "\n\t\t\t\tCar Available List"<<std::endl;
    std::cout << std::left;
    std::cout.width(19);
    std::cout << "\nBrand";
    std::cout.width(34);
    std::cout << "Model";
    std::cout.width(23);
    std::cout << "Number";
    std::cout.width(24);
    std::cout << "Status"<<std::endl;
    std::cout<<"-------------------------------------------------------------------------------------"<<std::endl;
    for(auto car : m_carList)
    {
        if(car->getStatus() == "Available")
        {
            std::cout.width(18);
            std::cout <<car->getBrand();
            std::cout.width(34);
            std::cout <<car->getModel();
            std::cout.width(23);
            std::cout <<car->getVehicleNumber();
            std::cout.width(24);
            std::cout <<car->getStatus()<<std::endl;
        }
    }


    std::cout<< "\n\n\t\t\t\tBike Available List"<<std::endl;
    std::cout << std::left;
    std::cout.width(19);
    std::cout << "\nBrand";
    std::cout.width(34);
    std::cout << "Model";
    std::cout.width(23);
    std::cout << "Number";
    std::cout.width(24);
    std::cout << "Status"<<std::endl;
    std::cout<<"-------------------------------------------------------------------------------------"<<std::endl;
    for(auto bike : m_bikeList)
    {
        if(bike->getStatus() == "Available")
        {
            std::cout.width(18);
            std::cout <<bike->getBrand();
            std::cout.width(34);
            std::cout <<bike->getModel();
            std::cout.width(23);
            std::cout <<bike->getVehicleNumber();
            std::cout.width(24);
            std::cout <<bike->getStatus()<<std::endl;
        }
    }
}


void VehicleManager::updateBikePrice()
{
    std::cout << "Update Bike Price Function Called" << std::endl;

    std::string vehicleNumber;
    float newRentPrice;

    std::cout << "Enter Bike Number: ";
    std::cin >> vehicleNumber;

    for (auto bike : m_bikeList)
    {
        if (bike->getVehicleNumber() == vehicleNumber)
        {
            std::cout << "Enter Updated Rent Price: ";
            std::cin >> newRentPrice;
            bike->setRentPrice(newRentPrice);
            std::cout << "Bike rent price updated successfully" << std::endl;
            return;
        }
    }
    std::cout << "Bike with number " << vehicleNumber << " not found" << std::endl;
}


void VehicleManager::updateCarPrice()
{
    std::cout << "Update Car Price Function Called" << std::endl;

    std::string vehicleNumber;
    float newRentPrice;

    std::cout << "Enter Car Number: ";
    std::cin >> vehicleNumber;

    for (auto car : m_carList)
    {
        if (car->getVehicleNumber() == vehicleNumber)
        {
            std::cout << "Enter Updated Rent Price: ";
            std::cin >> newRentPrice;
            car->setRentPrice(newRentPrice);
            std::cout << "Car rent price updated successfully" << std::endl;
            return;
        }
    }
    std::cout << "Car with number " << vehicleNumber << " not found" << std::endl;
}

void VehicleManager::searchCar()
{
    std::cout<<"Search Car Function Called"<<std::endl;

    std::string vehicleNumber;

    std::cout << "Enter Vehicle Number: ";
    std::cin >> vehicleNumber;

    std::cout << std::left;
    std::cout.width(19);
    std::cout << "\nBrand";
    std::cout.width(34);
    std::cout << "Model";
    std::cout.width(23);
    std::cout << "Number";
    std::cout.width(24);
    std::cout << "Status";
    std::cout.width(15);
    std::cout << "RentPrice"<<std::endl;
    std::cout<<std::endl;
    for(auto car : m_carList)
    {
        if(car->getVehicleNumber() == vehicleNumber)
        {
            std::cout.width(18);
            std::cout <<car->getBrand();
            std::cout.width(34);
            std::cout <<car->getModel();
            std::cout.width(23);
            std::cout <<car->getVehicleNumber();
            std::cout.width(24);
            std::cout <<car->getStatus();
            std::cout.width(15);
            std::cout <<car->getRentPrice()<<std::endl;
        }
    }
}



void VehicleManager::searchBike()
{
    std::cout<<"Search Bike Function Called"<<std::endl;

    std::string vehicleNumber;

    std::cout << "Enter Vehicle Number: ";
    std::cin >> vehicleNumber;

    std::cout << std::left;
    std::cout.width(19);
    std::cout << "\nBrand";
    std::cout.width(34);
    std::cout << "Model";
    std::cout.width(23);
    std::cout << "Number";
    std::cout.width(24);
    std::cout << "Status";
    std::cout.width(15);
    std::cout << "RentPrice"<<std::endl;
    std::cout<<std::endl;
    for(auto bike : m_bikeList)
    {
        if(bike->getVehicleNumber() == vehicleNumber)
        {
            std::cout.width(18);
            std::cout <<bike->getBrand();
            std::cout.width(34);
            std::cout <<bike->getModel();
            std::cout.width(23);
            std::cout <<bike->getVehicleNumber();
            std::cout.width(24);
            std::cout <<bike->getStatus();
            std::cout.width(15);
            std::cout <<bike->getRentPrice()<<std::endl;
        }
    }
}

enum
{
    CASH = 1,
    UPI
};


void VehicleManager::rentBike()
{
    PaymentMode* payment = nullptr;

    std::cout << "Rent Bike Function Called" << std::endl;

    std::string customerName, contactNumber, vehicleNumber, vehicleType, paymentType, paymentStatus, paymentID;
    int rentDuration;
    float amount;

    std::cout << "Enter Vehicle Number: ";
    std::cin >> vehicleNumber;

    for (auto& bike : m_bikeList)
    {
        if (bike->getVehicleNumber() == vehicleNumber)
        {
            if (bike->getStatus() == "Available")
            {
                std::cout << "Enter Customer Name: ";
                std::cin >> customerName;
                std::cout << "Enter Contact Number: ";
                std::cin >> contactNumber;
                std::cout << "Enter Rent Duration: ";
                std::cin >> rentDuration;

                int choice = 0;

                std::cout<<"\nPAYMENT METHODS"<<std::endl;
                std::cout<<" 1.Cash"<<std::endl;
                std::cout<<" 2.UPI"<<std::endl;
                std::cout<<" Enter your choice:";
                std::cin>>choice;

                switch (choice)
                {
                case CASH:
                {
                    std::cout<<"Rent Price: "<<bike->getRentPrice()<<std::endl;
                    std::cout << "Enter Amount: ";
                    std::cin >> amount;

                    payment = new Cash;
                    payment->setPaymentType("Cash");
                    payment->setPaymentID("NULL");

                    if(bike->getRentPrice() == amount)
                    {
                        bike->setStatus("Booked");
                        payment->setPaymentStatus("Paid");
                        payment->setPaidAmount(amount);
                        payment->setBalanceAmount(0);
                        break;
                    }
                    else if(bike->getRentPrice() > amount)
                    {
                        bike->setStatus("Booked");
                        payment->setPaymentStatus("Balance");
                        payment->setPaidAmount(amount);
                        payment->setBalanceAmount(bike->getRentPrice() - amount);
                        break;
                    }
                    else
                    {
                        std::cout<<"Bike not Booked"<<std::endl;
                        break;
                    }
                }
                break;
                case UPI:
                {
                    std::cout<<"Rent Price: "<<bike->getRentPrice()<<std::endl;
                    std::cout << "Enter Amount: ";
                    std::cin >> amount;
                    std::cout << "Enter UTR Number: ";
                    std::cin >> paymentID;

                    payment = new Upi;
                    payment->setPaymentType("UPI");
                    payment->setPaymentID(paymentID);

                    if(bike->getRentPrice() == amount)
                    {
                        bike->setStatus("Booked");
                        payment->setPaymentStatus("Paid");
                        payment->setPaidAmount(amount);
                        payment->setBalanceAmount(0);
                        break;
                    }
                    else if(bike->getRentPrice() > amount)
                    {
                        bike->setStatus("Booked");
                        payment->setPaymentStatus("Balance");
                        payment->setPaidAmount(amount);
                        payment->setBalanceAmount(bike->getRentPrice() - amount);
                        break;
                    }
                    else
                    {
                        std::cout<<"Bike not Booked"<<std::endl;
                        break;
                    }
                }
                break;
                default:
                    std::cout<<"Invaild Choice"<<std::endl;
                    break;
                }

                m_rentalHistory.push_back(new RentalDetails(customerName, contactNumber, "Bike", rentDuration, bike, payment));
                std::cout << "Bike rented successfully" << std::endl;
                return;
            }
            else
            {
                std::cout << "Bike is already booked" << std::endl;
                return;
            }
        }
    }
    std::cout << "Bike with number " << vehicleNumber << " not found" << std::endl;
}


void VehicleManager::rentCar()
{
    PaymentMode* payment = nullptr;

    std::cout << "Rent Car Function Called" << std::endl;

    std::string customerName, contactNumber, vehicleNumber, vehicleType, paymentType, paymentStatus, paymentID;
    int rentDuration;
    float amount;

    std::cout << "Enter Vehicle Number: ";
    std::cin >> vehicleNumber;

    for (auto& car : m_carList)
    {
        if (car->getVehicleNumber() == vehicleNumber)
        {
            if (car->getStatus() == "Available")
            {
                std::cout << "Enter Customer Name: ";
                std::cin >> customerName;
                std::cout << "Enter Contact Number: ";
                std::cin >> contactNumber;
                std::cout << "Enter Rent Duration: ";
                std::cin >> rentDuration;

                int choice = 0;

                std::cout<<"\nPAYMENT METHODS"<<std::endl;
                std::cout<<" 1.Cash"<<std::endl;
                std::cout<<" 2.UPI"<<std::endl;
                std::cout<<" Enter your choice:";
                std::cin>>choice;

                switch (choice)
                {
                case CASH:
                {
                    std::cout<<"Rent Price: "<<car->getRentPrice()<<std::endl;
                    std::cout << "Enter Amount: ";
                    std::cin >> amount;

                    payment = new Cash;
                    payment->setPaymentType("Cash");
                    payment->setPaymentID("NULL");

                    if(car->getRentPrice() == amount)
                    {
                        car->setStatus("Booked");
                        payment->setPaymentStatus("Paid");
                        payment->setPaidAmount(amount);
                        payment->setBalanceAmount(0);
                        break;
                    }
                    else if(car->getRentPrice() > amount)
                    {
                        car->setStatus("Booked");
                        payment->setPaymentStatus("Balance");
                        payment->setPaidAmount(amount);
                        payment->setBalanceAmount(car->getRentPrice() - amount);
                        break;
                    }
                    else
                    {
                        std::cout<<"Car not Booked"<<std::endl;
                        break;
                    }
                }
                break;
                case UPI:
                {
                    std::cout<<"Rent Price: "<<car->getRentPrice()<<std::endl;
                    std::cout << "Enter Amount: ";
                    std::cin >> amount;
                    std::cout << "Enter UTR Number: ";
                    std::cin >> paymentID;

                    payment = new Upi;
                    payment->setPaymentType("UPI");
                    payment->setPaymentID(paymentID);

                    if(car->getRentPrice() == amount)
                    {
                        car->setStatus("Booked");
                        payment->setPaymentStatus("Paid");
                        payment->setPaidAmount(amount);
                        payment->setBalanceAmount(0);
                        break;
                    }
                    else if(car->getRentPrice() > amount)
                    {
                        car->setStatus("Booked");
                        payment->setPaymentStatus("Balance");
                        payment->setPaidAmount(amount);
                        payment->setBalanceAmount(car->getRentPrice() - amount);
                        break;
                    }
                    else
                    {
                        std::cout<<"Car not Booked"<<std::endl;
                        break;
                    }
                }
                break;
                default:
                    std::cout<<"Invaild Choice"<<std::endl;
                    break;
                }

                m_rentalHistory.push_back(new RentalDetails(customerName, contactNumber, "Car", rentDuration, car, payment));
                std::cout << "Car rented successfully" << std::endl;
                return;
            }
            else
            {
                std::cout << "Car is already booked" << std::endl;
                return;
            }
        }
    }
    std::cout << "Car with number " << vehicleNumber << " not found" << std::endl;
}


void VehicleManager::returnVehicle()
{
    std::cout << "Return Vehicle Function Called" << std::endl;

    std::string vehicleNumber;
    float balanceAmount = 0.0;

    std::cout << "Enter Vehicle Number: ";
    std::cin >> vehicleNumber;

    for (auto& rental : m_rentalHistory)
    {
        if (rental->getRentalVehicleDetails()->getVehicleNumber() == vehicleNumber && rental->getRentalVehicleDetails()->getStatus() == "Booked")
        {
            PaymentMode* payment = rental->getPaymentMode();
            balanceAmount = payment->getBalanceAmount();

            if (balanceAmount > 0)
            {
                std::cout << "Balance Amount: " << balanceAmount << std::endl;
                std::cout << "Enter Amount to Pay: ";
                std::cin >> balanceAmount;

                if (balanceAmount == payment->getBalanceAmount())
                {
                    payment->setPaidAmount(payment->getPaidAmount() + balanceAmount);
                    payment->setBalanceAmount(0);
                    payment->setPaymentStatus("Paid");
                    std::cout << "Vehicle returned successfully Balance paid" << std::endl;
                }
                else
                {
                    std::cout << "Incorrect amount Full balance not paid" << std::endl;
                    return;
                }
            }
            else
            {
                std::cout << "Vehicle returned successfully No balance" << std::endl;
            }

            std::string vehicleType = rental->getVehicleType();
            if (vehicleType == "Car")
            {
                for (auto& car : m_carList)
                {
                    if (car->getVehicleNumber() == vehicleNumber)
                    {
                        car->setStatus("Available");
                        break;
                    }
                }
            }
            else if (vehicleType == "Bike")
            {
                for (auto& bike : m_bikeList)
                {
                    if (bike->getVehicleNumber() == vehicleNumber)
                    {
                        bike->setStatus("Available");
                        break;
                    }
                }
            }
            return;
        }
    }
    std::cout << "Vehicle with number " << vehicleNumber << " not found or not booked" << std::endl;
}




void VehicleManager::displayRentalHistory()
{
    std::cout << "Display RentalHistory Function Called" << std::endl;

    std::cout << std::left;
    std::cout.width(10);
    std::cout << "\nName";
    std::cout.width(15);
    std::cout << "ContactNumber";
    std::cout.width(10);
    std::cout << "Duration";
    std::cout.width(15);
    std::cout << "VehicleType";
    std::cout.width(15);
    std::cout << "Brand";
    std::cout.width(12);
    std::cout << "Model";
    std::cout.width(15);
    std::cout << "VehicleNumber";
    std::cout.width(12);
    std::cout << "RentPrice";
    std::cout.width(12);
    std::cout << "Status";
    std::cout.width(12);
    std::cout << "PaymentType";
    std::cout.width(12);
    std::cout << "PaymentID";
    std::cout.width(15);
    std::cout << "PaymentStatus";
    std::cout.width(12);
    std::cout << "PayedAmount";
    std::cout.width(12);
    std::cout << "BalanceAmount";
    std::cout<<std::endl;
    for (auto i : m_rentalHistory)
    {
        // std::cout << "\nCustomerName: " << i->getCustomerName() << " | ";
        // std::cout << "ContactNumber: " << i->getContactNumber() << " | ";
        // std::cout << "RentDuration: " << i->getRentDuration() << " | ";

        // std::cout << "VehicleType: " << i->getVehicleType() << " | ";
        // std::cout << "Brand: " << i->getRentalVehicleDetails()->getBrand() << " | ";
        // std::cout << "Model: " << i->getRentalVehicleDetails()->getModel() << " | ";
        // std::cout << "VehicleNumber: " << i->getRentalVehicleDetails()->getVehicleNumber() << " | ";
        // std::cout << "RentPrice: " << i->getRentalVehicleDetails()->getRentPrice() << " | ";

        // std::cout << "Status: " << i->getRentalVehicleDetails()->getStatus() << " | ";
        // std::cout << "PaymentType: " << i->getPaymentMode()->getPaymentType() << " | ";
        // std::cout << "Payment ID: " << i->getPaymentMode()->getPaymentID() << " | ";
        // std::cout << "PaymentStatus: " << i->getPaymentMode()->getPaymentStatus() << " | ";
        // std::cout << "Payedamount: " << i->getPaymentMode()->getPaidAmount() << " | ";
        // std::cout << "Balanceamount: " << i->getPaymentMode()->getBalanceAmount() <<std::endl;

        std::cout.width(9);
        std::cout<<i->getCustomerName();
        std::cout.width(15);
        std::cout<<i->getContactNumber();
        std::cout.width(10);
        std::cout<<i->getRentDuration();
        std::cout.width(15);
        std::cout<<i->getVehicleType();

        std::cout.width(15);
        std::cout<<i->getRentalVehicleDetails()->getBrand();
        std::cout.width(12);
        std::cout<<i->getRentalVehicleDetails()->getModel();
        std::cout.width(15);
        std::cout<<i->getRentalVehicleDetails()->getVehicleNumber();
        std::cout.width(12);
        std::cout<<i->getRentalVehicleDetails()->getRentPrice();

        std::cout.width(12);
        std::cout<<i->getRentalVehicleDetails()->getStatus();
        std::cout.width(12);
        std::cout<<i->getPaymentMode()->getPaymentType();
        std::cout.width(12);
        std::cout<<i->getPaymentMode()->getPaymentID();
        std::cout.width(15);
        std::cout<<i->getPaymentMode()->getPaymentStatus();
        std::cout.width(12);
        std::cout<<i->getPaymentMode()->getPaidAmount();
        std::cout.width(12);
        std::cout<<i->getPaymentMode()->getBalanceAmount()<<std::endl;
    }
}


// void VehicleManager::sortByName()
// {
//     std::cout<<"Sort By Name Function Called"<<std::endl;

//     for(auto firstcar : m_carList)
//     {
//         for(auto secondcar : m_carList)
//         {
//             if(secondcar->getBrand() > firstcar->getBrand())
//             {
//                 std::iter_swap(firstcar,secondbike);
//             }
//         }
//     }

//     for(auto firstbike : m_bikeList)
//     {
//         for(auto secondbike : m_bikeList)
//         {
//             if(secondbike->getBrand() > firstbike->getBrand())
//             {
//                 std::iter_swap(firstbike,secondbike);
//             }
//         }
//     }
// }


void VehicleManager::sortByName()
{
    std::cout << "Sort By Name Function Called" << std::endl;


    m_carList.sort([](RentalCars* a, RentalCars* b) {
        return a->getModel() < b->getBrand();
    });

    m_bikeList.sort([](RentalBikes* a, RentalBikes* b) {
        return a->getModel() < b->getBrand();
    });
}


// void VehicleManager::sortByPrice()
// {
//     std::cout<<"Sort By Price Function Called"<<std::endl;

//     for(auto firstcar : m_carList)
//     {
//         for(auto secondcar : m_carList)
//         {
//             if(secondcar->getRentPrice() < firstcar->getRentPrice())
//             {
//                 std::iter_swap(firstcar,secondcar);
//             }
//         }
//     }

//     int count1 = 0;
//     int count2 = 0;
//     for(auto firstbike : m_bikeList)
//     {
//         for(auto secondbike : m_bikeList)
//         {
//             if(secondbike->getRentPrice() < firstbike->getRentPrice())
//             {
//                 std::iter_swap(firstbike,secondbike);
//             }
//             count2 ++;
//             std::cout<<"Number of count: "<<count2<<std::endl;
//         }
//         count1 ++;
//     }
//     std::cout<<"Number of count: "<<count1<<std::endl;
// }


void VehicleManager::sortByPrice()
{
    std::cout << "Sort By Price Function Called" << std::endl;

    m_carList.sort([](RentalCars* a, RentalCars* b) {
        return a->getRentPrice() > b->getRentPrice();
    });

    m_bikeList.sort([](RentalBikes* a, RentalBikes* b) {
        return a->getRentPrice() > b->getRentPrice();
    });
}


void VehicleManager::deleteVehicle()
{
    std::cout << "Delete Vehicle Function Called" << std::endl;

    std::string vehicleNumber;
    std::cout << "Enter Vehicle Number: ";
    std::cin >> vehicleNumber;

    for (auto bike = m_bikeList.begin(); bike != m_bikeList.end(); bike++)
    {
        if ((*bike)->getVehicleNumber() == vehicleNumber)
        {
            m_bikeList.erase(bike);
            std::cout << vehicleNumber << "Bike deleted successfully" << std::endl;
            return;
        }
    }

    for (auto car = m_carList.begin(); car != m_carList.end(); car++)
    {
        if ((*car)->getVehicleNumber() == vehicleNumber)
        {
            m_carList.erase(car);
            std::cout << vehicleNumber << "Car deleted successfully" << std::endl;
            return;
        }
    }

    std::cout << "Vehicle not found" << std::endl;
}

enum
{
    RENTBIKE = 1,
    RENTCAR,
    EXITRENT
};

void VehicleManager::rentVehicles()
{
    int choice;

    while(true)
    {
        std::cout<<"\n RENT VEHICLES "<<std::endl;
        std::cout<<" 1. Rent Bike "<<std::endl;
        std::cout<<" 2. Rent Car "<<std::endl;
        std::cout<<" 3. Exit "<<std::endl;
        std::cout<<" Enter your choice: ";
        std::cin>>choice;

        switch (choice)
        {
        case RENTBIKE:
            rentBike();
            break;
        case RENTCAR:
            rentCar();
            break;
        case EXITRENT:
            std::cout<<" Exit Rent "<<std::endl;
            return;
        default:
            std::cout<<"Invalid Choice"<<std::endl;
            break;
        }
    }
}

enum
{
    SEARCHBIKE = 1,
    SEARCHCAR,
    EXITSEARCH
};

void VehicleManager::searchVehicles()
{
    int choice;

    while(true)
    {
        std::cout<<"\n SEARCH VEHICLES "<<std::endl;
        std::cout<<" 1. Search Bike "<<std::endl;
        std::cout<<" 2. Search Car "<<std::endl;
        std::cout<<" 3. Exit "<<std::endl;
        std::cout<<" Enter your choice: ";
        std::cin>>choice;

        switch (choice)
        {
        case SEARCHBIKE:
            searchBike();
            break;
        case SEARCHCAR:
            searchCar();
            break;
        case EXITSEARCH:
            std::cout<<" Exit Search"<<std::endl;
            return;
        default:
            std::cout<<"Invalid Choice"<<std::endl;
            break;
        }
    }
}

enum
{
    DISPLAYBIKE = 1,
    SORTBIKENAME,
    SORTBIKEPRICE,
    EXITBIKESORT
};

void VehicleManager::sortBike()
{
    int choice;

    while(true)
    {
        std::cout<<"\nBikes List"<<std::endl;
        std::cout<<" 1.Display Bikes"<<std::endl;
        std::cout<<" 2.Sort By Name"<<std::endl;
        std::cout<<" 3.Sort By Price"<<std::endl;
        std::cout<<" 4.Exit Sort"<<std::endl;
        std::cout<<" Enter Your Choice:";
        std::cin>>choice;

        switch (choice)
        {
        case DISPLAYBIKE:
            displayListOfBikes();
            break;
        case SORTBIKENAME:
            sortByName();
            break;
        case SORTBIKEPRICE:
            sortByPrice();
            break;
        case EXITBIKESORT:
            std::cout<<"Exit Bike List"<<std::endl;
            return;
        default:
            std::cout<<"Invalid Choice"<<std::endl;
            break;
        }
    }
}


enum
{
    DISPLAYCAR = 1,
    SORTCARNAME,
    SORTCARPRICE,
    EXITCARSORT
};

void VehicleManager::sortCar()
{
    int choice;

    while(true)
    {
        std::cout<<"\nCars List"<<std::endl;
        std::cout<<" 1.Display Cars"<<std::endl;
        std::cout<<" 2.Sort By Name"<<std::endl;
        std::cout<<" 3.Sort By Price"<<std::endl;
        std::cout<<" 4.Exit Sort"<<std::endl;
        std::cout<<" Enter Your Choice:";
        std::cin>>choice;

        switch (choice)
        {
        case DISPLAYCAR:
            displayListOfCars();
            break;
        case SORTCARNAME:
            sortByName();
            break;
        case SORTCARPRICE:
            sortByPrice();
            break;
        case 4:
            std::cout<<"Exit Car List"<<std::endl;
            return;
        default:
            std::cout<<"Invalid Choice"<<std::endl;
            break;
        }
    }
}

enum
{
    BIKE =1,
    CAR,
    DISPLAYBOOKEDVEHICLES,
    DISPLAYAVAILABLEVEHICLES,
    EXITDISPLAY
};

void VehicleManager::displayVehicles()
{
    int choice;

    while(true)
    {
        std::cout<<"\n DISPLAY VEHICLES "<<std::endl;
        std::cout<<" 1. Bike "<<std::endl;
        std::cout<<" 2. Car "<<std::endl;
        std::cout<<" 3. Display Booked Vehicles "<<std::endl;
        std::cout<<" 4. Display Available Vehicles "<<std::endl;
        std::cout<<" 5. Exit "<<std::endl;
        std::cout<<" Enter your choice: ";
        std::cin>>choice;

        switch (choice)
        {
        case BIKE:
            sortBike();
            break;
        case CAR:
            sortCar();
            break;
        case DISPLAYBOOKEDVEHICLES:
            sortBookedVehicle();
            break;
        case DISPLAYAVAILABLEVEHICLES:
            sortAvailableVehicle();
            break;
        case EXITDISPLAY:
            std::cout<<" Exit Display"<<std::endl;
            return;
        default:
            std::cout<<"Invalid Choice"<<std::endl;
            break;
        }
    }
}

enum
{
    UPDATEBIKEPRICE = 1,
    UPDATECARPRICE,
    EXITUPDATE
};

void VehicleManager::updateVehiclesPrice()
{
    int choice;

    std::cout<<"\n UPDATE VEHICLES PRICE "<<std::endl;
    std::cout<<" 1. Update Bike Price "<<std::endl;
    std::cout<<" 2. Update Car Price "<<std::endl;
    std::cout<<" 3. Exit "<<std::endl;
    std::cout<<" Enter your choice: ";
    std::cin>>choice;

    switch (choice)
    {
    case UPDATEBIKEPRICE:
        updateBikePrice();
        break;
    case UPDATECARPRICE:
        updateCarPrice();
        break;
    case EXITUPDATE:
        std::cout<<"Exit Update"<<std::endl;
        return;
    default:
        std::cout<<"Invalid Choice"<<std::endl;
        break;
    }
}

enum
{
    ADDBIKE = 1,
    ADDCAR,
    EXITADD
};

void VehicleManager::addVehicles()
{
    int choice;

    std::cout<<"\n ADD VEHICLES "<<std::endl;
    std::cout<<" 1. Add Bike "<<std::endl;
    std::cout<<" 2. Add Car "<<std::endl;
    std::cout<<" 3. Exit "<<std::endl;
    std::cout<<" Enter your choice: ";
    std::cin>>choice;

    switch (choice)
    {
    case ADDBIKE:
        addBike();
        break;
    case ADDCAR:
        addCar();
        break;
    case EXITADD:
        std::cout<<"Exit Add"<<std::endl;
        return;
    default:
        std::cout<<"Invalid Choice"<<std::endl;
        break;
    }
}


void VehicleManager::applicationManager()
{
    int choice;

    while (true)
    {
        std::cout << "\nVehicle Rental Application" << std::endl;
        std::cout << "\n 1. Add Vehicles" << std::endl;
        std::cout << " 2. Display Vehicles" << std::endl;
        std::cout << " 3. Update Vehicle Rent Price" << std::endl;
        std::cout << " 4. Rent Vehicle" << std::endl;
        std::cout << " 5. Return Vehicle" << std::endl;
        std::cout << " 6. Display Rental History" << std::endl;
        std::cout << " 7. Delete Vehicle" << std::endl;
        std::cout << " 8. Search Vehicle" << std::endl;
        std::cout << " 9. Exit" << std::endl;
        std::cout << " Enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            addVehicles();
            break;
        case 2:
            displayVehicles();
            break;
        case 3:
            updateVehiclesPrice();
            break;
        case 4:
            rentVehicles();
            break;
        case 5:
            returnVehicle();
            break;
        case 6:
            displayRentalHistory();
            break;
        case 7:
            deleteVehicle();
            break;
        case 8:
            searchVehicles();
            break;
        case 9:
            std::cout<<" Exit Vehicle "<<std::endl;
            return;
        default:
            std::cout << "Invalid Choice" <<std::endl;
            break;
        }
    }
}

