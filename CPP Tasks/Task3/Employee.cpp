#include "Employee.h"
#include <iostream>

Employee::Employee(std::string name, BaseObject* parent):BaseObject(name)
{
    std::cout<<"Employee Parameter Constructor Called"<<std::endl;
    if(parent)
    {
        parent->addChild(this);
    }
}

Employee::~Employee()
{
   std::cout<<"Employee Destructor Called"<<std::endl;
}

void Employee::addChild(BaseObject *child)
{
    std::cout<<"AddChild Employee Function Called"<<std::endl;
    m_childList.push_back(child);
}

void Employee::print()
{
    std::cout<<"Print Employee Function Called"<<std::endl;
    std::cout << "Employee Name: " << m_name << std::endl;
    for (auto child : m_childList)
    {
        child->print();
    }
}


