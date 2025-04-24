#include "month.h"
#include <iostream>

Month::Month(int month)
{
    std::cout<<"Month Constructor Called"<<std::endl;
    this->m_month = month;
}

Month::~Month()
{
    for(auto day : m_days)
    {
        delete day;
    }
    std::cout<<"Month Destructor Called"<<std::endl;
}

int Month::getMonth()
{
    return m_month;
}


Day* Month::createDay(int day)
{

    if(getDay(day) != nullptr)
    {
        return nullptr;
    }
    Day* newday = new Day(day);
    m_days.push_back(newday);
    return newday;
}


Day *Month::getDay(int day)
{
    for(auto d : m_days)
    {
        if(d->getDay() == day)
        {
            return d;
        }
    }
    return nullptr;
}


