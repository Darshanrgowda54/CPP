#ifndef CAR_H
#define CAR_H

#include "vehicle.h"
class Car:public Vehicle
{
public:
    Car();
    ~Car();
    Car(std::string brand, std::string model, std::string vehicleNumber, float rentPrice, std::string status);
};
#endif // CAR_H
