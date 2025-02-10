#ifndef VEHICAL_H
#define VEHICAL_H
#include <string>
//#include "car.h"
class Vehical
{
    std::string m_brand;
    int m_wheel;
public:
    Vehical();
    Vehical(std::string brand, int wheel);
    ~Vehical();
    friend class Car;
    //friend void printme(Vehical &v);
};

#endif // VEHICAL_H
