#include "Student.h"
#include <iostream>

Student::Student()
{
    std::cout<<"Student Constructor Called"<<std::endl;
}


Student::~Student()
{
    std::cout<<"Student Destructor Called"<<std::endl;
}


Student::Student(std::string name, std::string mobilenumber, std::string id, std::string address)
{
    std::cout<<"Student Parameter Constructor Called"<<std::endl;
    this->m_name = name;
    this->m_mobileNumber = mobilenumber;
    this->m_id = id;
    this->m_address = address;
}


std::string Student::getName()
{
    return m_name;
}


std::string Student::getMobileNumber()
{
    return m_mobileNumber;
}


std::string Student::getId()
{
    return m_id;
}


std::string Student::getAddress()
{
    return m_address;
}

