#include "car.h"
#include "vehical.h"
#include <iostream>


Car::~Car()
{
    std::cout<<"Car Destructor Called"<<std::endl;
}

void Car::printme(Vehical &v)  // friend funnction using
{
    std::cout<<"Car printme Called"<<std::endl;
    std::cout<<"Engine Type :"<<v.m_enginetype<<std::endl;
    std::cout<<"Wheels :"<<v.m_wheel<<std::endl;

}

// void Car::display()   // friend Class using
// {
//     std::cout<<"Car display Called"<<std::endl;
//     std::cout<<"Engine Type :"<<V->m_enginetype<<std::endl;
//     std::cout<<"Engine Type :"<<V->m_wheel<<std::endl;
// }

Car::Car()
{
    std::cout<<"Car Constructor Called"<<std::endl;
    // this->V->m_enginetype = "M4";
    // this->V->m_wheel = 8;
}


