#include "student.h"
#include <iostream>

Student::Student()
{
    std::cout<<"Student Constructor Called"<<std::endl;
}

Student::~Student()
{
    std::cout<<"Student Destructor Called"<<std::endl;
}

Student::Student(std::string name, std::string Id)
{
    std::cout<<"Student Parameter Constructor Called"<<std::endl;
    this->m_name = name;
    this->m_Id = Id;
}
