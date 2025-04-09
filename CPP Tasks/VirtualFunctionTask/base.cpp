#include "base.h"
#include <iostream>

Base::Base()
{
    std::cout<<"Base Constructor Called"<<std::endl;
}

Base::~Base()
{
    std::cout<<"Base Destructor Called"<<std::endl;
}

void Base::printme()
{
    std::cout<<"Base PrintMe Function Called"<<std::endl;
}
