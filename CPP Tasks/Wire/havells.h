#ifndef HAVELLS_H
#define HAVELLS_H

#include "wire.h"
class Havells:public Wire
{
private:
    int *m_b;
public:
    Havells();
    ~Havells() override;
};

#endif // HAVELLS_H
