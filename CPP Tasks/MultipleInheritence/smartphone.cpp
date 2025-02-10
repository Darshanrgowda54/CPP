#include "smartphone.h"
#include <iostream>

SmartPhone::SmartPhone(int pexels, int dialpad, std::string musicName)
    :Camera(pexels),Phone(dialpad),Music(musicName)
{
    std::cout<<"Constructor SmartPhone Called"<<std::endl;
}

SmartPhone::~SmartPhone()
{
    std::cout<<"Destructor SmartPhone Called"<<std::endl;
}
