#include "darshan.h"
#include <iostream>

Darshan::Darshan()
{
    std::cout<<"Darshan Constructor Called"<<std::endl;
}

Darshan::~Darshan()
{
    std::cout<<"Darshan Destructor Called"<<std::endl;
}

Darshan::Darshan(const Darshan &D1)
{
    std::cout<<"Darshan Copy Constructor Called"<<std::endl;
}
