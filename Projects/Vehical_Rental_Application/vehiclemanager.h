#ifndef VEHICLEMANAGER_H
#define VEHICLEMANAGER_H

#include "bike.h"
#include "car.h"
#include <list>
class VehicleManager
{
public:
    VehicleManager();
    ~VehicleManager();

    void addBike();
    //void addCar(std::string brand, std::string model, std::string vehicleNumber, float rentPrice);
    void displayListOfBikes();
    void displayListOfCars();

private:
    std::list<Bike> m_bikeList;
    std::list<Car> m_carList;
};

#endif // VEHICLEMANAGER_H
