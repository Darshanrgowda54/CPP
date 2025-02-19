#include "student.h"
#include <iostream>

Student::Student()
{
    std::cout<<"Constructor Called"<<std::endl;
}

Student::Student(std::string name, int age, std::string address)
{
    std::cout<<"Parameter Constructor Called"<<std::endl;
    this->m_name = name;
    this->m_age = age;
    this->m_address = address;
}

std::ostream& operator<<(std::ostream& output, const Student& student)
{
    output<<"Name: "<<student.m_name<<std::endl;
    output<<"Age: "<<student.m_age<<std::endl;
    output<<"Address: "<<student.m_address<<std::endl;
    return output;
}

Student::~Student()
{
    std::cout<<"Destructor Called"<<std::endl;
}



