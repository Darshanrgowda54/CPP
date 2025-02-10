#ifndef HYBRIDENGINE_H
#define HYBRIDENGINE_H

#include "cngengine.h"
#include "petrolengine.h"


class HybridEngine:public CngEngine,PetrolEngine
{
public:
    HybridEngine();
    HybridEngine(int wheel,int mirror);
    ~HybridEngine();
};

#endif // HYBRIDENGINE_H
