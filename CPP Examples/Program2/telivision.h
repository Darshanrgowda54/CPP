#ifndef TELIVISION_H
#define TELIVISION_H
#include <string>

class Telivision
{
public:
    Telivision(float price,std::string brand,float size);
    float m_price;
    std::string m_brand;
    float m_size;

    void display();
};

#endif
