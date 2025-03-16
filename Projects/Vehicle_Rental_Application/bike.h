#ifndef BIKE_H
#define BIKE_H

#include "vehicle.h"
class Bike:public Vehicle
{
public:
    Bike();
    ~Bike();
    Bike(std::string brand,std::string model,std::string vehicleNumber,float rentPrice,std::string status);
};

#endif // BIKE_H
