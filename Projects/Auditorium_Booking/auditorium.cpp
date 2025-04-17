#include "auditorium.h"
#include <iostream>

Auditorium::Auditorium()
{
    std::cout<<"Auditorium Constructor Called"<<std::endl;
}

Auditorium::~Auditorium()
{
    std::cout<<"Auditorium Destructor Called"<<std::endl;
}

Auditorium::Auditorium(std::string name, std::string status)
{
    std::cout<<"Auditorium Parameter Constructor Called"<<std::endl;
    this->m_name = name;
    this->m_status = status;
}

std::string Auditorium::getName()
{
    return m_name;
}

void Auditorium::setName(std::string newName)
{
    m_name = newName;
}

std::string Auditorium::getStatus()
{
    return m_status;
}

void Auditorium::setStatus(std::string newStatus)
{
    m_status = newStatus;
}

Date Auditorium::getBookDate()
{
    return m_bookDate;
}

void Auditorium::setBookDate(int day, int month, int year)
{
    this->m_bookDate.day = day;
    this->m_bookDate.month = month;
    this->m_bookDate.year = year;
}
