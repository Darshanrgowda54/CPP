#ifndef OFFICE_H
#define OFFICE_H

#include <vector>
class Employee;

class Office
{
public:
    Office();
    ~Office();

    void print();
    void addEmployee(Employee* employee);

private:
    std::vector<Employee*> m_employeelist;
};

#endif // OFFICE_H
