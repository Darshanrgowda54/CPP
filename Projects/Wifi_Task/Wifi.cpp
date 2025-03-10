#include "Wifi.h"
#include <iostream>

Wifi::Wifi()
{
    std::cout<<"Wifi Constructor Called"<<std::endl;
}

Wifi::~Wifi()
{
    std::cout<<"Wifi Destructor Called"<<std::endl;
}

Wifi::Wifi(std::string name, float signalStrength, std::string status, std::string password)
{
    std::cout<<"Wifi Parameter Constructor Called"<<std::endl;
    this->m_wifiName = name;
    this->m_signalStrength = signalStrength;
    this->m_wifiStatus = status;
    this->m_wifiPassword = password;
}

std::string Wifi::getName()
{
    return m_wifiName;
}

float Wifi::getSignalStrength()
{
    return m_signalStrength;
}

std::string Wifi::getStatus()
{
    return m_wifiStatus;
}

std::string Wifi::getPassword()
{
    return m_wifiPassword;
}


void Wifi::displayWifiDetails()
{
    std::cout<<"Display Function Calledd"<<std::endl;

    for(auto i = m_list.begin();i != m_list.end();i++)
    {
        std::cout<<std::endl;
        std::cout<<"Wifi Name: "<<i->getName()<<std::endl;
        std::cout<<"Wifi Name: "<<i->getSignalStrength()<<std::endl;
        std::cout<<"Wifi Name: "<<i->getStatus()<<std::endl;
        std::cout<<"Wifi Name: "<<i->getPassword()<<std::endl;
        std::cout<<std::endl;
    }
}

bool Wifi::comp(Wifi &first, Wifi &last)
{
    return first.getSignalStrength() >last.getSignalStrength();
}






























// m_list.sort([](Wifi& a,Wifi& b)
// {
//     return a.getSignalStrength() > b.getSignalStrength();
// });

// std::sort(m_list.begin(),m_list.end(),[](Wifi a, Wifi b)
// {
//     return a.getSignalStrength() > b.getSignalStrength();
// });
