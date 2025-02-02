#include "mobilephone.h"
#include <iostream>

MobilePhone::MobilePhone(std::string brand, std::string colour):m_brand(brand),m_colour(colour)
{
    std::cout<<"Constructor MobilePhone Called"<<std::endl;
    // this->m_brand = brand;
    // this->m_colour = colour;
    std::cout<<"Brand Name :"<<m_brand<<std::endl;
    std::cout<<"Phone Colour :"<<m_colour<<std::endl;
}


MobilePhone::~MobilePhone()
{
    std::cout<<"Destructor MobilePhone Called"<<std::endl;
}

