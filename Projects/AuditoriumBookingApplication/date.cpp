#include "date.h"
#include <iostream>

Date::Date()
{
    std::cout<<"Date Constructor Called"<<std::endl;
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


