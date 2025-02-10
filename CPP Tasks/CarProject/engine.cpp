#include "engine.h"
#include <iostream>

Engine::Engine()
{
    this->type = "Desiel";
    this->model = "V8";
    this->horspower =800;
    this->torq = 450;

    std::cout<<"Engine"<<std::endl;
}
