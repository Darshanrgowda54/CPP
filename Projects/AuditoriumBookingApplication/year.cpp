#include "year.h"
#include <iostream>

Year::Year(int year)
{
    std::cout<<"Year Constructor Called"<<std::endl;
    this->m_year = year;
}

Year::~Year()
{
    for(auto month : m_months)
    {
        delete month;
    }
    std::cout<<"Year Destructor Called"<<std::endl;
}

int Year::getYear()
{
    return m_year;
}

Month *Year::getMonth(int month)
{
    for(auto m : m_months)
    {
        if(m->getMonth() == month)
        {
            return m;
        }
    }
    return nullptr;
}

Month *Year::createMonth(int month)
{
    if(getMonth(month) != nullptr)
    {
        return nullptr;
    }
    Month* newmonth = new Month(month);
    m_months.push_back(newmonth);
    return newmonth;
}

