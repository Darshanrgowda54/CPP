#include "student.h"
#include <iostream>

Student::Student()
{
    std::cout<<"Student Constructor Called"<<std::endl;
}

Student::Student(std::string studentID, std::string studentname, std::string studentNumber)
{
    std::cout<<"Parameter Student Constructor Called"<<std::endl;
    this->m_ID = studentID;
    this->m_name = studentname;
    this->m_mobileNumber = studentNumber;
}

std::string Student::getstudentID()
{
    return m_ID;
}

std::string Student::getstudentname()
{
    return m_name;
}

std::string Student::getstudentNumber()
{
    return m_mobileNumber;
}

void Student::set(std::string studentname, std::string studentNumber)
{
    m_name = studentname;
    m_mobileNumber = studentNumber;
}

Student::~Student()
{
    std::cout<<"Student Destructor Called"<<std::endl;
}




