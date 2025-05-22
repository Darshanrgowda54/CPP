#include "car.h"
#include <iostream>

Car::Car(int wheel)
{
    std::cout<<"Constructor Called"<<std::endl;
    m_Wheels = new int(wheel);
}


Car::~Car()
{
    delete m_Wheels;
    std::cout<<"Destructor Called"<<std::endl;
}

Car::Car(const Car &c)
{
    std::cout<<c.m_Wheels<<std::endl;
    std::cout<<c.m_Wheels<<std::endl;
    std::cout<<"Copy Constructor Called"<<std::endl;
    m_Wheels = new int(*c.m_Wheels);
    //m_Wheels = c.m_Wheels;
}

void Car::print()
{
    std::cout<<*m_Wheels<<std::endl;
}
