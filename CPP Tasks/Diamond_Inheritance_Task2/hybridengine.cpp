#include "hybridengine.h"
#include <iostream>

HybridEngine::HybridEngine()
{
    std::cout<<"HybridEngine Constructor Called"<<std::endl;
}

HybridEngine::HybridEngine(int wheel, int mirror):Engine(wheel,mirror)/*CngEngine(wheel,mirror)*/
{
    std::cout<<"HybridEngine parameter Constructor Called"<<std::endl;
}

HybridEngine::~HybridEngine()
{
    std::cout<<"HybridEngine Destructor Called"<<std::endl;
}
