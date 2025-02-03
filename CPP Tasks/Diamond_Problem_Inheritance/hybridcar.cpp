#include "hybridcar.h"
#include <iostream>
#include"vehicle.h"

HybridCar::HybridCar(int wheels,int mirrors):Vehicle(wheels,mirrors)
{
    std::cout<<"Constructor HybridCar Called"<<std::endl;
}

HybridCar::~HybridCar()
{
    std::cout<<"Destructor HybridCar Called"<<std::endl;
}
