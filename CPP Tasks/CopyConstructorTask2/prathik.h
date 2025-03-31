#ifndef PRATHIK_H
#define PRATHIK_H
#include <vector>
#include "darshan.h"

class Prathik
{
public:
    Prathik();
    ~Prathik();

    void pushback(Darshan d);
private:
    std::vector<Darshan> darshanObj;
};

#endif // PRATHIK_H
