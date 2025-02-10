#include "car.h"
#include "vehical.h"
#include <iostream>

Car::Car()
{
    std::cout<<"Constructor Car Called"<<std::endl;
}


Car::~Car()
{
    std::cout<<"Destructor Car Called"<<std::endl;
}



// void Car::printme(Vehical &v)
// {
//     std::cout<<"Printme Funnciton Called"<<std::endl;
//     std::cout<<"Wheel :"<<v.m_wheel<<std::endl;
//     std::cout<<"Brand :"<<v.m_brand<<std::endl;
// }




Car::Car(std::string brand, int wheel)
{
    std::cout<<"Parameter  Car Constructor Vehical Called"<<std::endl;
    this->V->m_brand= brand;
    this->V->m_wheel = wheel;
}

void Car::display()
{
    std::cout<<"Display Car Called"<<std::endl;
    std::cout<<"Brand :"<<V->m_brand<<std::endl;
    std::cout<<"wheel :"<<V->m_wheel<<std::endl;
}

