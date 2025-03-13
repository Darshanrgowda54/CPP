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

void Wifi::setStatus(std::string status)
{
    this->m_wifiStatus = status;
}


