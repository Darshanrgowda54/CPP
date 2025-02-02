#ifndef MOBILEPHONE_H
#define MOBILEPHONE_H
#include <string>
class MobilePhone
{
    std::string m_brand;
    std::string m_colour;
public:
    MobilePhone(std::string brand,std::string colour);
    ~MobilePhone();
};

#endif // MOBILEPHONE_H
