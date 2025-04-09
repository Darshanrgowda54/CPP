#ifndef DERIVED_H
#define DERIVED_H

#include "base.h"
class Derived:public Base
{
public:
    Derived();
    ~Derived();

    void printme();
    void show();
};

#endif // DERIVED_H
