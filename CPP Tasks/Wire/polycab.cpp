#include "polycab.h"
#include <iostream>

Polycab::Polycab()
{
    std::cout<<"Polycab Constructor Called"<<std::endl;
    this->m_a = new int[100];
}


Polycab::~Polycab()
{
    std::cout<<"Polycab Destructor Called"<<std::endl;
    delete[] m_a;
}

