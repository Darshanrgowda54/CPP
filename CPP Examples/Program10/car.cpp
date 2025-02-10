#include "car.h"
#include <iostream>

// Car::Car()
// {
//     std::cout<<"Constructor called"<<std::endl;
//     this->m_brand = new std::string;
//     this->m_model = new std::string;
// }

Car::Car(int wheels, int seats)
{
    std::cout<<"Constructor called 1"<<std::endl;
    this->m_wheels = wheels;
    this->m_seats = seats;
}

// Car::~Car()
// {
//     std::cout<<"Destroctor called 1"<<std::endl;
// }

// Car::~Car()
// {
//     std::cout<<"Destroctor called"<<std::endl;
//     delete m_brand;
//     delete m_model;
// }

void Car::display()
{
    // std::cout<<"Brand :"<<*m_brand<<std::endl;
    // std::cout<<"Model :"<<*m_model<<std::endl;
    std::cout<<"Wheels :"<<m_wheels<<std::endl;
    std::cout<<"Seats :"<<m_seats<<std::endl;
}


