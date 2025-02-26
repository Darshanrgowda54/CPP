#ifndef POLYCAB_H
#define POLYCAB_H

#include "wire.h"
class Polycab:public Wire
{
private:
    int *m_a;
public:
    Polycab();
    ~Polycab() override;
};

#endif // POLYCAB_H
