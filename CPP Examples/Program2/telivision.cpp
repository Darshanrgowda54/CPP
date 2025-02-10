#include "telivision.h"
#include <iostream>

Telivision::Telivision(float price, std::string brand, float size)
{
    std::cout<< price <<"\n";
    m_price = price;
    m_brand = brand;
    m_size = size;
}

void Telivision::display()
{
    std::cout<<"Hello World **********";
}
