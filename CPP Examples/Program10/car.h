#ifndef CAR_H
#define CAR_H

#include <iostream>
class Car
{
    int m_wheels;
    int m_seats;
public:
    //std::string *m_brand;
    //std::string *m_model;
    //Car();
    Car(int wheels,int seats);
    ~Car(){std::cout<<"HELLO";}
    void display();
};

#endif // CAR_H
