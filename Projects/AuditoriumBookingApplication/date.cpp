#include "date.h"
#include <iostream>


Date::Date()
{
    std::cout<<"Date Constructor Called"<<std::endl;
    this->m_day = 23;
    this->m_month = 04;
    this->m_year = 2025;
}

Date::~Date()
{
    std::cout<<"Date Destructor Called"<<std::endl;
}

int Date::getDay()
{
    return m_day;
}

void Date::setDay(int newDay)
{
    m_day = newDay;
}

int Date::getMonth()
{
    return m_month;
}

void Date::setMonth(int newMonth)
{
    m_month = newMonth;
}

int Date::getYear()
{
    return m_year;
}

void Date::setYear(int newYear)
{
    m_year = newYear;
}

bool Date::operator<(const Date& date) const
{
    if (m_year != date.m_year)
    {
        return m_year < date.m_year;
    }
    if (m_month != date.m_month)
    {
        return m_month < date.m_month;
    }
    return m_day < date.m_day;
}


