#include "basicphone.h"
#include <iostream>
#include <ostream>

BasicPhone::BasicPhone(std::string brand, std::string colour, int storage):MobilePhone(brand,colour,storage)
{
    std::cout<<"Constructor called basicphone"<<std::endl;
    std::cout<<"Basicphone12314 :"<<brand<<std::endl;
    brand = "Nokia";
    colour = "Pink";
    storage = 10;
    std::cout<<"Basicphone :"<<brand<<std::endl;
    std::cout<<"Basicphone :"<<colour<<std::endl;
    std::cout<<"Basicphone :"<<storage<<std::endl;
}

BasicPhone::~BasicPhone()
{
    std::cout<<"Destructor called basicphone"<<std::endl;
}
