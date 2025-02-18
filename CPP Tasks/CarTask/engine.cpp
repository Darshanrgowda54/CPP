#include "engine.h"
#include <iostream>

Engine::Engine()
{
    std::cout<<"Constructor Engine Called"<<std::endl;
}

Engine::~Engine()
{
    std::cout<<"Destructor Engine Called"<<std::endl;
}

void Engine::start()
{
    std::cout<<"Engine Started"<<std::endl;
}

void Engine::stop()
{
    std::cout<<"Engine Stop"<<std::endl;
}
