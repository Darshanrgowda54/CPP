#ifndef DERIVED_H
#define DERIVED_H

#include "Base.h"
class Derived
{
public:
    Derived(int number,Base* b);
    Derived(int number,Derived* d);
    ~Derived();

    void show();
private:
    int m_number;
};

#endif // DERIVED_H
