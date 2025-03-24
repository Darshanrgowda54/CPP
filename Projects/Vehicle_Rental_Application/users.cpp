#include "users.h"
#include <iostream>

Users::Users()
{
    std::cout<<"Users Constructor Called"<<std::endl;
}

Users::~Users()
{
    std::cout<<"Users Destructor Called"<<std::endl;
}

Users::Users(std::string name, std::string password, std::string contactNumber, std::string email)
{
    std::cout<<"Users Parameter Constructor Called"<<std::endl;
    this->m_userName = name;
    this->m_password = password;
    this->m_contactNumber = contactNumber;
    this->m_userEmail = email;
}

std::string Users::getName()
{
    return m_userName;
}

std::string Users::getPassword()
{
    return m_password;
}


std::string Users::getContactNumber()
{
    return m_contactNumber;
}

std::string Users::getEmailId()
{
    return m_userEmail;
}

void Users::setName(std::string name)
{
    this->m_userName = name;
}

void Users::setPassword(std::string password)
{
    this->m_password = password;
}

void Users::setContactNumber(std::string number)
{
    this->m_contactNumber = number;
}

void Users::setEmail(std::string email)
{
    this->m_userEmail = email;
}
