#ifndef BMW_H
#define BMW_H
#include "car.h"

class BMW:public Car
{

public:
    BMW(int publiccar,int privatecar,int protectedcar);
    ~BMW();
};

#endif // BMW_H
