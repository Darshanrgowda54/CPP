#include "engine.h"
#include <iostream>

Engine::Engine()
{
    std::cout<<"Engine Constructor Called"<<std::endl;
}

Engine::~Engine()
{
    std::cout<<"Engine Destructor Called"<<std::endl;
}

void Engine::start()
{
    std::cout<<"Engine Start"<<std::endl;
}

void Engine::stop()
{
    std::cout<<"Engine Start"<<std::endl;
}
