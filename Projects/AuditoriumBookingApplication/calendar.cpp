#include "calendar.h"
#include <iomanip>
#include <conio.h>
#include <iostream>

Calendar::Calendar():m_today()
{
    std::cout<<"Calendar Constructor Called"<<std::endl;
    printTodayDate();
}


Calendar::~Calendar()
{
    std::cout<<"\nCalendar Destructor Called"<<std::endl;
    for (auto y : m_years)
    {
        delete y;
    }
    m_years.clear();
}


bool isLeapYear(int year)
{
    if (year % 4 != 0) return false;
    if (year % 100 != 0) return true;
    return (year % 400 == 0);
}


int getDaysInMonth(int year, int month)
{
    static const int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year))
    {
        return 29;
    }
    return daysInMonth[month - 1];
}


int getStartDayOfWeek(int year, int month)
{
    tm time_in = {};
    time_in.tm_year = year - 1900;
    time_in.tm_mon = month - 1;
    time_in.tm_mday = 1;
    mktime(&time_in);
    return time_in.tm_wday;
}


void Calendar::printCalendar(int year, int month)
{
    Year* newYear = getYear(year);
    if (newYear == nullptr)
    {
        newYear = createYear(year);
    }

    Month* newMonth = newYear->getMonth(month);
    if (newMonth == nullptr)
    {
        newMonth = newYear->createMonth(month);
    }

    const std::string months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    std::cout << "\n      " << months[month - 1] << " " << year << std::endl;
    std::cout << "SU MO TU WE TH FR SA\n";

    int startDay = getStartDayOfWeek(year, month);
    int daysInMonth = getDaysInMonth(year, month);

    int currentDayOfWeek = 0;

    for (int i = 0; i < startDay; ++i)
    {
        std::cout << "   ";
        currentDayOfWeek++;
    }

    for (int day = 1; day <= daysInMonth; ++day)
    {
        Day* d = newMonth->getDay(day);
        if (!d)
        {
            d = newMonth->createDay(day);
        }
        std::cout << std::setw(2) << day << " ";
        currentDayOfWeek++;

        if (currentDayOfWeek == 7)
        {
            std::cout << std::endl;
            currentDayOfWeek = 0;
        }
    }
    if (currentDayOfWeek != 0)
    {
        std::cout << std::endl;
    }

    std::cout << std::endl;
}


void Calendar::printTodayDate()
{
    time_t t = time(nullptr);
    struct tm* today = localtime(&t);

    std::cout << "Today's Date: "
              << today->tm_mday << "/"
              << (today->tm_mon + 1 < 10 ? "0" : "") << today->tm_mon + 1 << "/"
              << today->tm_year + 1900 << std::endl << std::endl;
}



void Calendar::navigateMonths()
{
    int currentYear = m_today.getYear();
    int currentMonth = m_today.getMonth();

    char key;
    do {
        printCalendar(currentYear, currentMonth);
        std::cout << "Press '<' (Prev Month), '>' (Next Month), Press 'Enter' to Booking: ";

        key = _getch();

        if (key == '>')
        {
            currentMonth++;
            if (currentMonth > 12)
            {
                currentMonth = 1;
                currentYear++;
            }
        }
        else if (key == '<')
        {
            currentMonth--;
            if (currentMonth < 1)
            {
                currentMonth = 12;
                currentYear--;
            }
        }

    } while (key != 13);
}

Year *Calendar::getYear(int year)
{
    for(auto y: m_years)
    {
        if(y->getYear() == year)
        {
            return y;
        }
    }
    return nullptr;
}


Year *Calendar::createYear(int year)
{
    if(getYear(year) != nullptr)
    {
        return nullptr;
    }
    Year* newyear = new Year(year);
    this->m_years.push_back(newyear);
    return newyear;
}

