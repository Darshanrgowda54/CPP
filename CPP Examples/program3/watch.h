#ifndef WATCH_H
#define WATCH_H
#include <string>

class Watch
{
public:
    Watch(float price,std::string brand);
    float m_price;
    std::string m_brand;
    Watch();

};

#endif // WATCH_H
