#include "day.h"
#include <iostream>

Day::Day(int day)
{
    std::cout<<"Day Constructur"<<std::endl;
    m_day = day;
}

Day::~Day()
{
    std::cout<<"Day Destructur"<<std::endl;
}

int Day::getDay()
{
    return m_day;
}
