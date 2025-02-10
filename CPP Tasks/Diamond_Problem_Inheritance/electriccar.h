#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H
#include "vehicle.h"

class ElectricCar: virtual public Vehicle
{
public:
    ElectricCar();
    ~ElectricCar();
};

#endif // ELECTRICCAR_H
