#include "mobilephone.h"
#include <iostream>


MobilePhone::MobilePhone(std::string brand, std::string colour, int storage)//:m_brand(brand),m_colour(colour),m_storage(storage)
{
    this->m_brand = brand;
    this->m_colour =colour;
    this->m_storage = storage;
    //std::cout<<"Brand123 :"<<brand<<std::endl;
    std::cout<<"Constructor called mobilephone"<<std::endl;
    std::cout<<"Brand :"<<m_brand<<std::endl;
    std::cout<<"Colour :"<<m_colour<<std::endl;
    std::cout<<"Storage :"<<m_storage<<std::endl;
}

MobilePhone::~MobilePhone()
{
    std::cout<<"Destructor called mobilephone"<<std::endl;
}
