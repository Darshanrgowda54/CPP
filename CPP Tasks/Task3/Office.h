#ifndef OFFICE_H
#define OFFICE_H

#include "baseobject.h"
#include <string>
class Employee;

class Office:public BaseObject
{
public:
    Office(const std::string name);
    ~Office();

    void addChild(BaseObject* child) override;
    void print() override;

};

#endif // OFFICE_H
