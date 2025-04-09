#include "derived.h"
#include <iostream>

Derived::Derived()
{
    std::cout<<"Derived Constructor Called"<<std::endl;
}

Derived::~Derived()
{
    std::cout<<"Derived Destructor Called"<<std::endl;
}

void Derived::printme()
{
    std::cout<<"Derived PrintMe Function Called"<<std::endl;
}

void Derived::show()
{
    std::cout<<"Derived Show Function Called"<<std::endl;
}
