#ifndef JSON_H
#define JSON_H
#include "fileoperation.h"

class JSON:public Fileoperation
{
public:
    JSON();
    ~JSON();
    std::list<Student> readData();
};

#endif // JSON_H
