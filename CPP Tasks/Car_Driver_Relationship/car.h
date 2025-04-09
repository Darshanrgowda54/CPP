#ifndef CAR_H
#define CAR_H

#include "driver.h"
class Car
{
public:
    Car();
    ~Car();

    void setDriver(Driver* d);
    std::string getBrand();
    void setBrand(std::string newBrand);
private:
    Driver* m_driver;
    std::string m_brand;
};

#endif // CAR_H
