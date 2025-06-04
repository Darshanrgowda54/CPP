#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "baseobject.h"

class Employee:public BaseObject
{
public:
    Employee(std::string name, BaseObject *parent = nullptr);
    ~Employee();

    void addChild(BaseObject* child) override;
    void print() override;

};

#endif // EMPLOYEE_H
