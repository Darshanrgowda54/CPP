#include "user.h"
#include <iostream>

User::User()
{
    std::cout<<"Users Constructor Called"<<std::endl;
}

User::~User()
{
    std::cout<<"Users Destructor Called"<<std::endl;
}

User::User(std::string name, std::string password, std::string contactNumber, std::string email)
    :m_userName(name),m_password(password),m_contactNumber(contactNumber),m_userEmail(email)
{
    std::cout<<"Users Parameter Constructor Called"<<std::endl;
    // this->m_userName = name;
    // this->m_password = password;
    // this->m_contactNumber = contactNumber;
    // this->m_userEmail = email;
}

std::string User::getName()
{
    return m_userName;
}

std::string User::getPassword()
{
    return m_password;
}


std::string User::getContactNumber()
{
    return m_contactNumber;
}

std::string User::getEmailId()
{
    return m_userEmail;
}

void User::setName(std::string name)
{
    this->m_userName = name;
}

void User::setPassword(std::string password)
{
    this->m_password = password;
}

void User::setContactNumber(std::string number)
{
    this->m_contactNumber = number;
}

void User::setEmail(std::string email)
{
    this->m_userEmail = email;
}
