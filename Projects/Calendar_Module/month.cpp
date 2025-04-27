#include "month.h"
#include "day.h"
#include <iostream>

Month::Month(int month)
{
    std::cout<<"Month Constructor"<<std::endl;
    this->m_month = month;
}

Month::~Month()
{
    std::cout<<"Month Destructor"<<std::endl;
    for (auto day : m_days)
    {
        delete day;
    }
}

int Month::getMonth()
{
    return m_month;
}

Day* Month::getOrCreateDay(int day)
{
    for (auto d : m_days)
    {
        if (d->getDay() == day)
            return d;
    }
    Day* newDay = new Day(day);
    m_days.push_back(newDay);
    return newDay;
}
