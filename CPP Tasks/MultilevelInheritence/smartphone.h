#ifndef SMARTPHONE_H
#define SMARTPHONE_H
#include "basicphone.h"

class SmartPhone:public BasicPhone
{
    std::string m_display;
public:
    SmartPhone(std::string display,std::string batterysize,std::string speakername,std::string brand,std::string colour);
    ~SmartPhone();
};

#endif // SMARTPHONE_H
