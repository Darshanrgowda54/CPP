#include "date.h"
#include <iostream>
#include <ctime>


Date::Date()
{
    std::cout<<"Date Constructor Called"<<std::endl;

    std::time_t t = time(nullptr);
    struct tm* now = localtime(&t);
    m_day = now->tm_mday;
    m_month = now->tm_mon + 1;
    m_year = now->tm_year + 1900;

    // this->m_day = 23;
    // this->m_month = 04;
    // this->m_year = 2025;
}

Date::Date(int day, int month, int year)
{
    this->m_day = day;
    this->m_month = month;
    this->m_year = year;
}

Date::~Date()
{
    //std::cout<<"Date Destructor Called"<<std::endl;
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

Date Date::getCurrentDate() const
{
    // return Date(m_day, m_month, m_year);
    time_t t = time(nullptr);
    struct tm* now = localtime(&t);
    return Date(now->tm_mday, now->tm_mon + 1, now->tm_year + 1900);
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


