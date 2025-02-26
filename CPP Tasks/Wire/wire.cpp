#include "wire.h"
#include <iostream>

Wire::Wire()
{
    std::cout<<"Wire Constructor Called"<<std::endl;
    this->m_ptr = new int[10];
}

Wire::~Wire()
{
    std::cout<<"Wire Destructor Called"<<std::endl;
    delete[] m_ptr;
}

