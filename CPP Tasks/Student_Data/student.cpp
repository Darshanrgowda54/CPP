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

Student::Student(std::string name, int age, std::string usn, std::string mobilenumber)
{
    std::cout<<"Parameter Student Constructor Called"<<std::endl;
    this->m_name = name;
    this->m_age = age;
    this->m_USN = usn;
    this->m_mobileNumber = mobilenumber;
}


std::string Student::getName()
{
    return m_name;
}

int Student::getAge()
{
    return  m_age;
}

std::string Student::getUSN()
{
    return m_USN;
}

std::string Student::getMobileNumber()
{
    return m_mobileNumber;
}
