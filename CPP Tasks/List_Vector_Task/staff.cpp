#include "staff.h"
#include <iostream>

Staff::Staff(std::string staffID,std::string staffname,int staffnumber)
{
    std::cout<<"Staff Parameter Constructor Called"<<std::endl;
    this->m_ID = staffID;
    this->m_name = staffname;
    this->m_mobileNumber = staffnumber;
}

std::string Staff::getstaffID()
{
    return m_ID;
}

std::string Staff::getstaffname()
{
    return m_name;
}

int Staff::getstaffnumber()
{
    return m_mobileNumber;
}

void Staff::set(std::string staffname, int staffnumber)
{
    m_name = staffname;
    m_mobileNumber = staffnumber;
}

Staff::~Staff()
{
    std::cout<<"Staff Destructor Called"<<std::endl;
}
