#ifndef VEHICLEMANAGER_H
#define VEHICLEMANAGER_H

#include "rentalbikes.h"
#include "rentalcars.h"
#include "fileoperation.h"
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

    void searchBike();
    void searchCar();

    void rentBike();
    void rentCar();

    void addVehicles();
    void displayVehicles();
    void updateVehiclesPrice();
    void deleteVehicle();
    void searchVehicles();
    void rentVehicles();
    void returnVehicle();
    void displayRentalHistory();

    void sortBike();
    void sortCar();

    void sortByName();
    void sortByPrice();
    void sortBookedVehicle();
    void sortAvailableVehicle();

    void applicationManager();

private:
    std::list<RentalBikes*> m_bikeList;
    std::list<RentalCars*> m_carList;
    std::list<RentalDetails*> m_rentalHistory;

    FileOperation* m_fileoperation;
};

#endif // VEHICLEMANAGER_H
