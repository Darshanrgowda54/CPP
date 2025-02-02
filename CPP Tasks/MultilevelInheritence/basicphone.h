#ifndef BASICPHONE_H
#define BASICPHONE_H
#include "mobilephone.h"

class BasicPhone:public MobilePhone
{
    // std::string m_brand;
    // std::string m_colour;
    std::string m_batterysize;
    std::string m_speakerbrand;
public:
    BasicPhone(std::string batterysize, std::string speakername, std::string brand,std::string colour);
    ~BasicPhone();
};

#endif // BASICPHONE_H
