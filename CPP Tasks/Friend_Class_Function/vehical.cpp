#include "vehical.h"
#include <iostream>

Vehical::Vehical()
{
    std::cout<<"Constructor Vehical Calledd"<<std::endl;
}


Vehical::~Vehical()
{
    std::cout<<"Destructor Vehical Calledd"<<std::endl;
}


Vehical::Vehical(std::string brand, int wheel):m_brand(brand),m_wheel(wheel)
{
    std::cout<<"Parameter Constructor Vehical Calledd"<<std::endl;
    std::cout<<"Brand :"<<m_brand<<std::endl;
    std::cout<<"Wheel :"<<m_wheel<<std::endl;
}

