#include "admin.h"
#include <iostream>

Admin::Admin()
{
    std::cout<<"Admin Constructor Called"<<std::endl;
}

Admin::~Admin()
{
    std::cout<<"Admin Destructor Called"<<std::endl;
}

Admin::Admin(std::string Id, std::string password, std::string name)
{
    std::cout<<"Admin Parameter Constructor Called"<<std::endl;
    this->m_Id = Id;
    this->m_Password = password;
    this->m_adminName = name;
}

std::string Admin::getId()
{
    return m_Id;
}

std::string Admin::getPassword()
{
    return m_Password;
}

std::string Admin::getName()
{
    return m_adminName;
}

void Admin::setId(std::string Id)
{
    this->m_Id = Id;
}

void Admin::setPassword(std::string password)
{
    this->m_Password = password;
}

void Admin::setName(std::string name)
{
    this->m_adminName = name;
}

