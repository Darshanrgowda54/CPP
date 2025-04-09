#ifndef OWNER_H
#define OWNER_H

#include "car.h"
#include "driver.h"
class Owner
{
public:
    Owner();
    ~Owner();

    void assignDriver(Driver *d);
private:
    Car* m_car;
};

#endif // OWNER_H
