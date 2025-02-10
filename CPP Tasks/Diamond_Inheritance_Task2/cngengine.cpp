#include "cngengine.h"
#include <iostream>

CngEngine::CngEngine()
{
    std::cout<<"CngEngine Constructor Called"<<std::endl;
}

CngEngine::CngEngine(int wheel, int mirror):Engine(wheel,mirror)
{
    std::cout<<"CngEngine Parameter Constructor Called"<<std::endl;
}

CngEngine::~CngEngine()
{
    std::cout<<"CngEngine Destructor Called"<<std::endl;
}
