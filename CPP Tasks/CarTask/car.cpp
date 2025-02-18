#include "car.h"
#include "engine.h"
#include "wheel.h"
#include <iostream>

Car::Car()
{
    std::cout<<"Constructor Called"<<std::endl;
}

Car::Car(Engine* e)
{
    std::cout<<"Car Parameter Construtor Car Called"<<std::endl;
    this->m_engine = e;
}

Car::~Car()
{
    std::cout<<"Destructor Car Called"<<std::endl;
}

void Car::carstart()
{
    std::cout<<"Car ON"<<std::endl;
    m_engine->start();
}

void Car::carmoved()
{
    std::cout<<"Car Move"<<std::endl;
}

void Car::carstop()
{
    std::cout<<"Car Stop"<<std::endl;
}
