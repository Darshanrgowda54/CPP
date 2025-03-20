#ifndef VEHICLEMANAGER_H
#define VEHICLEMANAGER_H

#include "bike.h"
#include "car.h"
#include "fileoperation.h"
#include "paymentmethod.h"
#include "rentaldetails.h"
#include <list>
class VehicleManager
{
public:
    VehicleManager();
    ~VehicleManager();

    void addBike();
    void addCar();

    void displayListOfBikes();
    void displayListOfCars();

    void updateBikePrice();
    void updateCarPrice();

    void searchCar();
    void searchBike();

    void addVehicles();
    void displayVehicles();
    void updateVehiclesPrice();
    void deleteVehicle();
    void searchVehicles();
    void rentVehicle();
    void returnVehicle();
    void displayRentalHistory();

    void sortVehicles();
    void sortByName();
    void sortByPrice();
    void sortBookedVehicle();
    void sortAvailableVehicle();

    void applicationManager();

private:
    std::list<Bike*> m_bikeList;
    std::list<Car*> m_carList;
    std::list<RentalDetails*> m_rentalHistory;
    FileOperation* fileoperation;
    PaymentMethod* payment;
};

#endif // VEHICLEMANAGER_H
