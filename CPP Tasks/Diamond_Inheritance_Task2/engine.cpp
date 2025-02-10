#include "engine.h"
#include <iostream>

Engine::Engine()
{
    std::cout<<"Engine Constructor Called"<<std::endl;
}

Engine::Engine(int wheel, int mirror):m_wheel(wheel),m_mirror(mirror)
{
    std::cout<<"Engine Parameter Constructor Called"<<std::endl;
    std::cout<<"wheels :"<<m_wheel<<std::endl;
    std::cout<<"Mirrors :"<<m_mirror<<std::endl;
}

Engine::~Engine()
{
    std::cout<<"Engine Destructor Called"<<std::endl;
}

void Engine::printme()
{
    std::cout<<"Engine start"<<std::endl;
}
