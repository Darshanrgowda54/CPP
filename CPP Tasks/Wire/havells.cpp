#include "havells.h"
#include <iostream>

Havells::Havells()
{
    std::cout<<"Havells Constructor Called"<<std::endl;
    this->m_b = new int[200];
}


Havells::~Havells()
{
    std::cout<<"Havells Destructor Called"<<std::endl;
    delete[] m_b;
}

