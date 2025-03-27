#include "Student.h"
#include <iostream>

Student::Student()
{
    std::cout<<"Student Constructor Called"<<std::endl;
    // this->m_name = new std::string;
}


Student::~Student()
{
    std::cout<<"Student Destructor Called"<<std::endl;
    delete m_name;
}

void Student::setName(std::string *name)
{
    this->m_name = name;
}

std::string Student::getName()
{
    return *m_name;
}

Student::Student(const Student &S1)
{
    std::string name = *S1.m_name;
    std::cout<<"Copy Constructor: " << name <<std::endl;
    this->m_name = new std::string(name);
}

void Student::operator =(const Student &S2)
{
    std::string name = *S2.m_name;
    std::cout<<"Assessment Constructor"<<std::endl;
    this->m_name = new std::string(name);
}
