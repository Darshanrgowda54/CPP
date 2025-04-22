#include "date.h"
#include<iostream>


Date::Date()
{
    std::cout<<"Date Constructor"<<std::endl;
}
Date::~Date()
{
    std::cout<<"Date Destructor"<<std::endl;
}

int Date::getDay()
{
    return m_day;
}

int Date::getMonth()
{
    return m_month;
}

int Date::getYear()
{
    return m_year;
}

bool Date::operator < (const Date& other)const
{
    if (m_year != other.m_year)
    {
        return m_year < other.m_year;
    }
    if (m_month != other.m_month)
    {
        return m_month < other.m_month;
    }
    return m_day < other.m_day;
}

std::istream & operator >> (std::istream& in, Date& date)
{
    in>>date.m_day>>date.m_month>>date.m_year;
    return in;
}


