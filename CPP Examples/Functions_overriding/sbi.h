#ifndef SBI_H
#define SBI_H
#include "rbi.h"

class SBI:public RBI
{
    int m_insurance;
public:
    SBI();
    ~SBI();
    void amount(int insurance);
};

#endif // SBI_H
