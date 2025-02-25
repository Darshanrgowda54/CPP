#include "staff.h"
#include <iostream>

// Staff::Staff()
// {
//     std::cout<<"Staff Constructor Called"<<std::endl;
// }

Staff::Staff(int staffID,std::string staffname,int staffnumber)
{
    std::cout<<"Staff Parameter Constructor Called"<<std::endl;
    this->m_staffID = staffID;
    this->m_staffname = staffname;
    this->m_staffNumber = staffnumber;
}

int Staff::getID()
{
    return m_staffID;
}

std::string Staff::getname()
{
    return m_staffname;
}

int Staff::getstaffnumber()
{
    return m_staffNumber;
}

void Staff::set(std::string staffname, int staffnumber)
{
    m_staffname = staffname;
    m_staffNumber = staffnumber;
}

Staff::~Staff()
{
    std::cout<<"Staff Destructor Called"<<std::endl;
}
