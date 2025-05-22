#include "Office.h"
#include "Employee.h"
#include <iostream>

Office::Office() {
    //std::cout<<"Office Constructor Called"<<std::endl;
}

Office::~Office() {
    //std::cout<<"Office Destructor Called"<<std::endl;
}


void Office::addEmployee(Employee *employee)
{
    m_employeelist.push_back(employee);
}


void Office::print()
{
    //std::cout<<"Office Print Function Called"<<std::endl;

    std::cout<<"Number of Employee: "<<m_employeelist.size()<<std::endl;
    for(Employee* emp : m_employeelist)
    {
        emp->print();
    }
}
