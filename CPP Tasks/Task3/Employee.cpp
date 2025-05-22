#include "Employee.h"
#include <iostream>

Employee::Employee() {
    //std::cout<<"Employee Constructor Called"<<std::endl;
}

Employee::Employee(std::string name, Office *office)
{
    //std::cout<<"Employee Parameter Constructor Called"<<std::endl;
    this->m_name = name;
    if(office != nullptr)
    {
        office->addEmployee(this);
    }
}

Employee::~Employee() {
   //std::cout<<"Employee Destructor Called"<<std::endl;
}

void Employee::print() {
    //std::cout<<"Employee Print Function Called"<<std::endl;
    std::cout<<"Employee Name: "<<m_name<<std::endl;
}
