#ifndef CAR_H
#define CAR_H
#include "engine.h"

class Car
{
private:
    Engine E1;
public:
    Car();
    ~Car();
    void start();
    void stop();
};

#endif // CAR_H
