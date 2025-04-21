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

Auditorium::Auditorium(std::string id, std::string name, std::string status)
{
    std::cout<<"Auditorium Parameter Constructor Called"<<std::endl;
    this->m_ID = id;
    this->m_name = name;
    this->m_status = status;
}

std::string Auditorium::getID()
{
    return m_ID;
}

void Auditorium::setID(std::string newID)
{
    m_ID = newID;
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

