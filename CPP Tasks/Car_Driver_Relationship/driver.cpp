#include "driver.h"
#include <iostream>

Driver::Driver()
{
    std::cout<<"Driver Constructor Called"<<std::endl;
}

Driver::~Driver()
{
    std::cout<<"Driver Destructor Called"<<std::endl;
}

std::string Driver::getName()
{
    return m_name;
}

void Driver::setName(std::string newName)
{
    m_name = newName;
}
