#include "car.h"
#include <iostream>
#include <ostream>


Car::Car(std::string brand, std::string model, int year)
{
    std::cout<<"Car Constructor"<<std::endl;

    this->m_brand = brand;
    this->m_model = model;
    this->m_year = year;
}


void Car::display()
{
    std::cout<<"Brand :"<<m_brand<<std::endl;
    std::cout<<"model :"<<m_model<<std::endl;
    std::cout<<"Year :"<<m_year<<std::endl;
}


Car::~Car()
{
    std::cout<<"Car Distructor"<<std::endl;
}

