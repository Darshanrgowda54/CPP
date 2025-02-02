#include "basicphone.h"
#include <iostream>



BasicPhone::BasicPhone(std::string batterysize, std::string speakerbrand, std::string brand,std::string colour)
    :MobilePhone(brand,colour)/*,m_brand(brand), m_colour(colour)*/,m_batterysize(batterysize),m_speakerbrand(speakerbrand)
{
    std::cout<<"Constructor BasicPhone Called"<<std::endl;
    // this->m_battery = battery;
    // this->m_speaker = speaker;
    std::cout<<"Battery Size :"<<m_batterysize<<std::endl;
    std::cout<<"Speaker Name :"<<m_speakerbrand<<std::endl;
    std::cout<<"Brand Name :"<<brand<<std::endl;
    std::cout<<"Colour :"<<colour<<std::endl;

}


BasicPhone::~BasicPhone()
{
    std::cout<<"Destructor BasicPhone Called"<<std::endl;
}

