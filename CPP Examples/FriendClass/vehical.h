#ifndef VEHICAL_H
#define VEHICAL_H
#include "car.h"
#include <string>

class Vehical
{
    std::string m_enginetype;
    int m_wheel;
public:
    Vehical();
    Vehical(std::string enginetype,int wheel);
    ~Vehical();
    //friend class Car;  // friend Class using
    void display();
    friend void Car::printme(Vehical &v);  // friend funnction using
};

#endif // VEHICAL_H
