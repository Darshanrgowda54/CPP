#include "personaldetails.h"
#include <iostream>

PersonalDetails::PersonalDetails()
{
    std::cout<<"PersonalDetails Constructor Called"<<std::endl;
}

PersonalDetails::~PersonalDetails()
{
    std::cout<<"PersonalDetails Destructor Called"<<std::endl;
}

PersonalDetails::PersonalDetails(std::string name, std::string Id)
{
   std::cout<<"PersonalDetails Parameter Constructor Called"<<std::endl;
    this->m_name = name;
    this->m_Id = Id;
}

std::string PersonalDetails::getName()
{
    return m_name;
}

void PersonalDetails::setName(std::string newName)
{
    m_name = newName;
}

std::string PersonalDetails::getId()
{
    return m_Id;
}

void PersonalDetails::setId(std::string newId)
{
    m_Id = newId;
}
