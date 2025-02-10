#ifndef CNGENGINE_H
#define CNGENGINE_H
#include "engine.h"

class CngEngine:virtual public Engine
{
public:
    CngEngine();
    CngEngine(int wheel,int mirror);
    ~CngEngine();
};

#endif // CNGENGINE_H
