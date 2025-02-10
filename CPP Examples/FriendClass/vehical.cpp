#include "vehical.h"
#include <iostream>

Vehical::Vehical()
{
    std::cout<<"Vehical Constructor Called"<<std::endl;
}

Vehical::Vehical(std::string enginetype, int wheel)
{
    std::cout<<"Vehical parameter Constructor Called"<<std::endl;
    this->m_enginetype = enginetype;
    this->m_wheel = wheel;
}

Vehical::~Vehical()
{
    std::cout<<"Vehical Destructor Called"<<std::endl;
}

void Vehical::display()
{
    std::cout<<"Vehical display Called"<<std::endl;
    std::cout<<"Engine Type :"<<m_enginetype<<std::endl;
    std::cout<<"Engine Type :"<<m_wheel<<std::endl;
}
