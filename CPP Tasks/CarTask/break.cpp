#include "break.h"
#include "wheel.h"
#include <iostream>

Break::Break()
{
    std::cout<<"Constructor Break Called"<<std::endl;
}

Break::Break(Wheel* m)
{
    std::cout<<"Break Parameter Constructor Called"<<std::endl;
    this->m_wheel = m;
}

Break::~Break()
{
    std::cout<<"Destructor Break Called"<<std::endl;
}

void Break::breakapplied()
{
    std::cout<<"Break Applied Car Started Slow Down"<<std::endl;
    m_wheel->wheelstop();
}
