#ifndef HYBRIDCAR_H
#define HYBRIDCAR_H
#include "car.h"
#include "ElectricCar.h"


class HybridCar:public ElectricCar,public Car
{
public:
    HybridCar(int wheels,int mirrors);
    ~HybridCar();
};

#endif // HYBRIDCAR_H
