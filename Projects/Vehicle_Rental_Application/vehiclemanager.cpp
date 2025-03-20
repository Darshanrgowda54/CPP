#include "vehiclemanager.h"
#include <iostream>

VehicleManager::VehicleManager()
{
    std::cout<<"VehicleManager Constructor Called"<<std::endl;
    fileoperation = new FileOperation;
    payment = new PaymentMethod;

    m_bikeList = fileoperation->readBikeData();
    m_carList = fileoperation->readCarData();
    m_rentalHistory = fileoperation->readRentalHistory();
}


VehicleManager::~VehicleManager()
{
    std::cout<<"VehicleManager Destructor Called"<<std::endl;

    fileoperation->writeBikeData(m_bikeList);
    fileoperation->writeCarData(m_carList);
    fileoperation->writeRentalHistory(m_rentalHistory);

    for(auto i : m_bikeList)
    {
        delete i;
    }

    for(auto i : m_carList)
    {
        delete i;
    }

    for(auto i : m_rentalHistory)
    {
        delete i;
    }

    delete fileoperation;
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

    m_bikeList.push_back(new Bike(brand,model,vehicleNumber,status,rentPrice));
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

    m_carList.push_back(new Car(brand,model,vehicleNumber,status,rentPrice));
}


void VehicleManager::displayListOfBikes()
{
    std::cout<<"\nDisplay Bike Function Called"<<std::endl;

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

    std::cout<<"-------------------------------------------------------------------------------------------------------------"<<std::endl;
    for(auto i: m_bikeList)
    {
        std::cout.width(18);
        std::cout <<i->getBrand();
        std::cout.width(34);
        std::cout <<i->getModel();
        std::cout.width(23);
        std::cout <<i->getVehicleNumber();
        std::cout.width(24);
        std::cout <<i->getStatus();
        std::cout.width(15);
        std::cout <<i->getRentPrice()<<std::endl;
    }
}


void VehicleManager::displayListOfCars()
{
    std::cout<<"\nDisplay Car Function Called"<<std::endl;

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
    for(auto i : m_carList)
    {
        if(i->getStatus() == "Booked")
        {
            std::cout.width(18);
            std::cout <<i->getBrand();
            std::cout.width(34);
            std::cout <<i->getModel();
            std::cout.width(23);
            std::cout <<i->getVehicleNumber();
            std::cout.width(24);
            std::cout <<i->getStatus()<<std::endl;
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
    for(auto i : m_bikeList)
    {
        if(i->getStatus() == "Booked")
        {
            std::cout.width(18);
            std::cout <<i->getBrand();
            std::cout.width(34);
            std::cout <<i->getModel();
            std::cout.width(23);
            std::cout <<i->getVehicleNumber();
            std::cout.width(24);
            std::cout <<i->getStatus()<<std::endl;
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
    for(auto i : m_carList)
    {
        if(i->getStatus() == "Available")
        {
            std::cout.width(18);
            std::cout <<i->getBrand();
            std::cout.width(34);
            std::cout <<i->getModel();
            std::cout.width(23);
            std::cout <<i->getVehicleNumber();
            std::cout.width(24);
            std::cout <<i->getStatus()<<std::endl;
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
    for(auto i : m_bikeList)
    {
        if(i->getStatus() == "Available")
        {
            std::cout.width(18);
            std::cout <<i->getBrand();
            std::cout.width(34);
            std::cout <<i->getModel();
            std::cout.width(23);
            std::cout <<i->getVehicleNumber();
            std::cout.width(24);
            std::cout <<i->getStatus()<<std::endl;
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

    for (auto i : m_bikeList)
    {
        if (i->getVehicleNumber() == vehicleNumber)
        {
            std::cout << "Enter Updated Rent Price: ";
            std::cin >> newRentPrice;
            i->setRentPrice(newRentPrice);
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

    for (auto i : m_carList)
    {
        if (i->getVehicleNumber() == vehicleNumber)
        {
            std::cout << "Enter Updated Rent Price: ";
            std::cin >> newRentPrice;
            i->setRentPrice(newRentPrice);
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


void VehicleManager::rentVehicle()
{
    std::cout << "Rent Vehicle Function Called" << std::endl;

    std::string customerName, contactNumber, vehicleNumber, vehicleType, paymentType, paymentStatus;
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
                std::cout << "Enter Vehicle Type: ";
                std::cin>> vehicleType;
                std::cout << "Enter Rent Duration: ";
                std::cin >> rentDuration;
                std::cout << "Enter Payment Type: ";
                std::cin>> paymentType;
                std::cout << "Enter Payment Status: ";
                std::cin >> paymentStatus;
                std::cout << "Enter Amount: ";
                std::cin >> amount;


                bike->setStatus("Booked");
                payment->setAmount(amount);
                payment->setPaymentType(paymentType);
                payment->setPaymentStatus(paymentStatus);
                m_rentalHistory.push_back(new RentalDetails(customerName, contactNumber, vehicleType, rentDuration, bike,payment));
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
                std::cout << "Enter Vehicle Type: ";
                std::cin>> vehicleType;
                std::cout << "Enter Rent Duration: ";
                std::cin >> rentDuration;

                car->setStatus("Booked");
                //m_rentalHistory.push_back(new RentalDetails(customerName, contactNumber, vehicleType, rentDuration,car));
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
    std::cout << "Vehicle with number " << vehicleNumber << " not found" << std::endl;
}


void VehicleManager::returnVehicle()
{
    std::cout<<"Return Vehicle Function Called"<<std::endl;

    std::string vehicleNumber, status;

    std::cout << "Enter Vehicle Number: ";
    std::cin >> vehicleNumber;

    for(auto i : m_bikeList)
    {
        if (i->getVehicleNumber() == vehicleNumber && i->getStatus() == "Booked")
        {
            i->setStatus("Available");
            return;
        }
    }

    for (auto i : m_carList)
    {
        if (i->getVehicleNumber() == vehicleNumber && i->getStatus() == "Booked")
        {
            i->setStatus("Available");
            return;
        }
    }
    std::cout << "Vehicle not found" << std::endl;
}


void VehicleManager::displayRentalHistory()
{
    std::cout << "Display RentalHistory Function Called" << std::endl;

    // std::cout << std::left;
    // std::cout.width(19);
    // std::cout << "\nName";
    // std::cout.width(34);
    // std::cout << "ContactNumber";
    // std::cout.width(23);
    // std::cout << "Duration";
    // std::cout.width(24);
    // std::cout << "Brand";
    // std::cout.width(15);
    // std::cout << "Model";
    // std::cout.width(15);
    // std::cout << "VehicleNumber";
    // std::cout.width(15);
    // std::cout << "RentPrice";
    // std::cout.width(15);
    // std::cout << "Status";
    // std::cout<<std::endl;
    for (auto i : m_rentalHistory)
    {
        std::cout << "\nCustomerName: " << i->getCustomerName() << " | ";
        std::cout << "ContactNumber: " << i->getContactNumber() << " | ";
        std::cout << "RentDuration: " << i->getRentDuration() << " | ";
        std::cout << "VehicleType: " << i->getVehicleType() << " | ";
        std::cout << "Brand: " << i->getVehicleDetails()->getBrand() << " | ";
        std::cout << "Model: " << i->getVehicleDetails()->getModel() << " | ";
        std::cout << "VehicleNumber: " << i->getVehicleDetails()->getVehicleNumber() << " | ";
        std::cout << "RentPrice: " << i->getVehicleDetails()->getRentPrice() << " | ";
        std::cout << "Status: " << i->getVehicleDetails()->getStatus() << " | ";
        std::cout << "Paymentamount: " << i->getPaymentMethod()->getAmount() << " | ";
        std::cout << "PaymentType: " << i->getPaymentMethod()->getPaymentType() << " | ";
        std::cout << "PaymentStatus: " << i->getPaymentMethod()->getPaymentStatus() <<std::endl;
    }
}


void VehicleManager::sortByName()
{
    std::cout<<"Sort By Name Function Called"<<std::endl;

    for(auto i : m_carList)
    {
        for(auto j : m_carList)
        {
            if(j->getBrand() > i->getBrand())
            {
                std::iter_swap(i,j);
            }
        }
    }

    for(auto i : m_bikeList)
    {
        for(auto j : m_bikeList)
        {
            if(j->getBrand() > i->getBrand())
            {
                std::iter_swap(i,j);
            }
        }
    }
    // displayListOfBikes();
    // displayListOfCars();
}


void VehicleManager::sortByPrice()
{
    std::cout<<"Sort By Price Function Called"<<std::endl;

    for(auto i : m_carList)
    {
        for(auto j : m_carList)
        {
            if(j->getRentPrice() < i->getRentPrice())
            {
                std::iter_swap(i,j);
            }
        }
    }

    for(auto i : m_bikeList)
    {
        for(auto j : m_bikeList)
        {
            if(j->getRentPrice() < i->getRentPrice())
            {
                std::iter_swap(i,j);
            }
        }
    }
    // displayListOfBikes();
    // displayListOfCars();
}


void VehicleManager::deleteVehicle()
{
    std::cout << "Delete Vehicle Function Called" << std::endl;

    std::string vehicleNumber;
    std::cout << "Enter Vehicle Number: ";
    std::cin >> vehicleNumber;

    for (auto i = m_bikeList.begin(); i != m_bikeList.end(); ++i)
    {
        if ((*i)->getVehicleNumber() == vehicleNumber)
        {
            m_bikeList.erase(i);
            std::cout << "Bike deleted successfully" << std::endl;
            return;
        }
    }

    for (auto i = m_carList.begin(); i != m_carList.end(); ++i)
    {
        if ((*i)->getVehicleNumber() == vehicleNumber)
        {
            m_carList.erase(i);
            std::cout << "Car deleted successfully" << std::endl;
            return;
        }
    }

    std::cout << "Vehicle not found" << std::endl;
}


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
        case 1:
            searchBike();
            break;
        case 2:
            searchCar();
            break;
        case 3:
            std::cout<<" Exit Search"<<std::endl;
            return;
        default:
            std::cout<<"Invalid Choice"<<std::endl;
            break;
        }
    }
}


void VehicleManager::sortVehicles()
{
    int choice;

    while(true)
    {
        std::cout<<"\n 1.Sort By Name"<<std::endl;
        std::cout<<" 2.Sort By Price"<<std::endl;
        std::cout<<" 3.Sort Booked Vehicles"<<std::endl;
        std::cout<<" 4.Sort Available Vehicles"<<std::endl;
        std::cout<<" 5.Exit Sort"<<std::endl;
        std::cout<<" Enter Your Choice:";
        std::cin>>choice;

        switch (choice)
        {
        case 1:
            sortByName();
            break;
        case 2:
            sortByPrice();
            break;
        case 3:
            sortBookedVehicle();
            break;
        case 4:
            sortAvailableVehicle();
            break;
        case 5:
            std::cout<<"Exit Sort"<<std::endl;
            return;
        default:
            std::cout<<"Invalid Choice"<<std::endl;
            break;
        }
    }
}


void VehicleManager::displayVehicles()
{
    int choice;

    while(true)
    {
        std::cout<<"\n DISPLAY VEHICLES "<<std::endl;
        std::cout<<" 1. Display Bike "<<std::endl;
        std::cout<<" 2. Display Car "<<std::endl;
        std::cout<<" 3. Exit "<<std::endl;
        std::cout<<" Enter your choice: ";
        std::cin>>choice;

        switch (choice)
        {
        case 1:
            displayListOfBikes();
            break;
        case 2:
            displayListOfCars();
            break;
        case 3:
            std::cout<<" Exit Display"<<std::endl;
            return;
        default:
            std::cout<<"Invalid Choice"<<std::endl;
            break;
        }
    }
}


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
    case 1:
        updateBikePrice();
        break;
    case 2:
        updateCarPrice();
        break;
    case 3:
        std::cout<<"Exit Update"<<std::endl;
        return;
    default:
        std::cout<<"Invalid Choice"<<std::endl;
        break;
    }
}


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
    case 1:
        addBike();
        break;
    case 2:
        addCar();
        break;
    case 3:
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
        std::cout << " 9. Sort Vehicles" << std::endl;
        std::cout << " 10. Exit" << std::endl;
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
            rentVehicle();
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
            sortVehicles();
            break;
        case 10:
            std::cout<<" Exit Vehicle "<<std::endl;
            return;
        default:
            std::cout << "Invalid Choice" <<std::endl;
            break;
        }
    }
}

