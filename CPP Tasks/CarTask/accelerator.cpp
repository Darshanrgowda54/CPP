#include "accelerator.h"
#include "wheel.h"
#include <iostream>

Accelerator::Accelerator()
{
    std::cout<<"Constructor Accelerator Callled"<<std::endl;
}

Accelerator::Accelerator(Wheel* wheel)
{
    std::cout<<"Accelerator Parameter Constructor Called"<<std::endl;
    this->m_wheel = wheel;
}

Accelerator::~Accelerator()
{
    std::cout<<"Destructor Accelerator Callled"<<std::endl;
}

void Accelerator::AcceleratorPress()
{
    std::cout<<"Accelerator Pressed"<<std::endl;
    m_wheel->wheelmoved();
}
