#include "Year.h"
#include "month.h"
#include <iostream>

Year::Year(int year)
{
    std::cout<<"Year Constructor"<<std::endl;
    m_year = year;
}

Year::~Year()
{
    std::cout<<"Year Destructor"<<std::endl;
    for (auto month : m_months)
    {
        delete month;
    }
}

int Year::getYear() const
{
    return m_year;
}

Month* Year::getOrCreateMonth(int month)
{
    for (auto m : m_months)
    {
        if (m->getMonth() == month)
            return m;
    }
    Month* newMonth = new Month(month);
    m_months.push_back(newMonth);
    return newMonth;
}
