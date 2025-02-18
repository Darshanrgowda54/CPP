#include "wheel.h"
#include "car.h"
#include <iostream>

Wheel::Wheel()
{
    std::cout<<"Constructor Wheel Callled"<<std::endl;
}

Wheel::Wheel(Car* c)
{
    std::cout<<"Wheel Parameter Constructor Called"<<std::endl;
    this->m_car = c;
}

Wheel::~Wheel()
{
    std::cout<<"Destructor Wheel Callled"<<std::endl;
}

void Wheel::wheelmoved()
{
    std::cout<<"Wheel Rotate"<<std::endl;
    m_car->carmoved();

}

void Wheel::wheelstop()
{
    std::cout<<"Wheel Stopped"<<std::endl;
    m_car->carstop();
}

