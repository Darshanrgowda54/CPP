#include "wheel.h"
#include <iostream>
#include <ostream>

Wheel::Wheel()
{
    this->type = "Alloy";
    this->size = 19;
    this->width = 8.0;

    std::cout<<"Wheel"<<std::endl;
}
