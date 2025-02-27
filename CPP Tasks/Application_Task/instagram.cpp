#include "instagram.h"
#include <iostream>

Instagram::Instagram()
{
    std::cout<<"Instagram Constructor Called"<<std::endl;
}

Instagram::~Instagram()
{
    std::cout<<"Instagram Destructor Called"<<std::endl;
}

void Instagram::appname()
{
    std::cout<<"Application Name is Instagram"<<std::endl;
}

void Instagram::appicon()
{
    std::cout<<"Application Icon Instagram"<<std::endl;
}

void Instagram::open()
{
    std::cout<<"Application Instagram Open"<<std::endl;
}
