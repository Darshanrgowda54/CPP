#ifndef CAR_H
#define CAR_H
#include "vehical.h"

class Vehical;

class Car:public Vehical
{
public:
    Vehical *V = new Vehical;
    Car();
    ~Car();
    Car(std::string brand, int wheel);
    void display();
    //void printme(Vehical &v);
};

#endif // CAR_H
