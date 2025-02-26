#ifndef FINOLEX_H
#define FINOLEX_H

#include "wire.h"
class Finolex:public Wire
{
private:
    int *m_c;
public:
    Finolex();
    ~Finolex() override;
};

#endif // FINOLEX_H
