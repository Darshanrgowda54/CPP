#include "car.h"
#include <iostream>
#include <ostream>

int Car::m_wheel = 0;

Car::Car()
{
    m_wheel++;
    std::cout << "Number of wheels: " << m_wheel << std::endl;
}
