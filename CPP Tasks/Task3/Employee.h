#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Office.h"
class Employee
{
public:
    Employee();
    Employee(std::string name,Office* office);
    ~Employee();

    void print();
private:
    std::string m_name;
};

#endif // EMPLOYEE_H
