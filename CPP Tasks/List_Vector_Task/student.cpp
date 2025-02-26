#include "student.h"
#include <iostream>


// Student::Student()
// {
//     std::cout<<"Student Constructor Called"<<std::endl;
// }

Student::Student(int rollnumber, std::string name, int age)
{
    std::cout<<"Parameter Student Constructor Called"<<std::endl;
    this->m_rollNumber = rollnumber;
    this->m_name = name;
    this->m_age = age;
}

int Student::getrollnumber()
{
    return m_rollNumber;
}

std::string Student::getname()
{
    return m_name;
}

int Student::getage()
{
    return m_age;
}


void Student::set(std::string name, int age)
{
    m_name = name;
    m_age = age;
}


Student::~Student()
{
    std::cout<<"Student Destructor Called"<<std::endl;
}

