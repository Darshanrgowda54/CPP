#ifndef CAR_H
#define CAR_H

#include <string>
class Car
{
    std::string m_brand;
    std::string m_model;
    int m_year;
public:
    Car(std::string m_brand,std::string model,int year);
    static void display();
    ~Car();
};

#endif // CAR_H
