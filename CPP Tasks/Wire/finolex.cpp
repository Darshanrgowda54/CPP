#include "finolex.h"
#include <iostream>

Finolex::Finolex()
{
    std::cout<<"Finolex Constructor Called"<<std::endl;
    this->m_c = new int[200];
}


Finolex::~Finolex()
{
    std::cout<<"Finolex Destructor Called"<<std::endl;
    delete[] m_c;
}

