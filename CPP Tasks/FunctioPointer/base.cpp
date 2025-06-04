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

void Base::print()
{
    std::cout<<"Print Function Called"<<std::endl;
}
