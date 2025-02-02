#include "car2.h"
#include "car.h"
#include <iostream>
#include <ostream>


Car2::Car2(std::string model, std::string brand, int year)
{
    std::cout<<"Car2 Constructor"<<std::endl;
    Car Carobj(model,brand,year);
}

Car2::~Car2()
{
    std::cout<<"Car2 Distructor"<<std::endl;
}
