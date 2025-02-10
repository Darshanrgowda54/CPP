#ifndef MOBILEPHONE_H
#define MOBILEPHONE_H
#include <string>

class MobilePhone
{
protected:
    std::string m_brand;
    std::string m_colour;
    int m_storage;

public:
    MobilePhone(std::string brand,std::string colour,int storage);
    ~MobilePhone();
};

#endif // MOBILEPHONE_H
