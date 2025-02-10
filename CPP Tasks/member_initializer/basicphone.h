#ifndef BASICPHONE_H
#define BASICPHONE_H
#include "mobilephone.h"

class BasicPhone:private MobilePhone
{
public:
    BasicPhone(std::string brand,std::string colour,int storage);
    ~BasicPhone();
};

#endif // BASICPHONE_H
