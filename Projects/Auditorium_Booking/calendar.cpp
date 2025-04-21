#include "calendar.h"
#include <iomanip>
#include <iostream>

Calendar::Calendar()
{
    std::cout<<"Calender Constructor Called"<<std::endl;
}

Calendar::~Calendar()
{
    std::cout<<"Calender Destructor Called"<<std::endl;
}

void Calendar::displayCalendar()
{
    std::cout << "April 2025 Calendar"<<std::endl;
    std::cout << "\nSun Mon Tue Wed Thu Fri Sat"<<std::endl;

    int startDay = 0;
    int Days = 30;

    for (int day = 1; day <= Days;day++)
    {
        std::cout << std::setw(3) << day << " ";

        if((startDay + day) % 7 == 0 )
        {
            std::cout<<" "<<std::endl;
        }
    }
}

int Calendar::getDay()
{
    return m_day;
}

void Calendar::setDay(int newDay)
{
    m_day = newDay;
}

int Calendar::getMonth()
{
    return m_month;
}

void Calendar::setMonth(int newMonth)
{
    m_month = newMonth;
}

int Calendar::getYear()
{
    return m_year;
}

void Calendar::setYear(int newYear)
{
    m_year = newYear;
}

