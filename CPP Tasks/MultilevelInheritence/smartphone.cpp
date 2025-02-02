#include "smartphone.h"
#include <iostream>

SmartPhone::SmartPhone(std::string display, std::string batterysize, std::string speakerbrand, std::string brand, std::string colour)
    :BasicPhone( batterysize,speakerbrand,brand,colour)
{
    std::cout<<"Constructor SmartPhone Called"<<std::endl;
    this->m_display = display;
    std::cout<<"Display name :"<<m_display<<std::endl;
}


SmartPhone::~SmartPhone()
{
    std::cout<<"Destructor SmartPhone Called"<<std::endl;
}

