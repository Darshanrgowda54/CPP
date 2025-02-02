#include "student.h"
#include <iostream>
#include <ostream>

Student::Student()
{
    m_age = new int();
    m_mobilenumber =new int();
}

void Student::printme()
{
    std::cout<<"Age :"<<*m_age<<std::endl;
    std::cout<<"mobilenumber :"<<*m_mobilenumber<<std::endl;
}

Student::~Student()
{
    delete m_age;
    delete m_mobilenumber;
    std::cout<<"delete"<<std::endl;
}
