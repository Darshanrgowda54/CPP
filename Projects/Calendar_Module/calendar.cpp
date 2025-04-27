#include "calendar.h"
#include "year.h"
// #include "month.h"
// #include "day.h"
#include <iomanip>
#include <iostream>
#include <ctime>

Calendar::Calendar()
{
    std::cout << "Calendar Constructor" << std::endl;
}

Calendar::~Calendar()
{
    std::cout << "Calendar Destructor" << std::endl;
    for(auto year: m_years)
    {
        delete year;
    }
}

Year* Calendar::getOrCreateYear(int year)
{
    for (auto y : m_years)
    {
        if (y->getYear() == year)
        {
            return y;
        }
    }
    Year* newYear = new Year(year);
    m_years.push_back(newYear);
    return newYear;
}

bool isLeapYear(int year)
{
    if (year % 4 != 0) return false;
    if (year % 100 != 0) return true;
    return (year % 400 == 0);
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

int getDaysInMonth(int year, int month)
{
    static const int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year))
        return 29;
    return daysInMonth[month - 1];
}

void Calendar::printMonthCalendar(int year, int month)
{
    //Year* y = this->getOrCreateYear(year);
    //Month* m = y->getOrCreateMonth(month);

    const std::string months[] = {"January", "February", "March", "April", "May", "June",
                                  "July", "August", "September", "October", "November", "December"};

    std::cout << "\n        " << months[month - 1] << " " << year <<std::endl;
    std::cout << "Su  Mo  Tu  We  Th  Fr  Sa"<<std::endl;

    int startDay = getStartDayOfWeek(year, month);
    int daysInMonth = getDaysInMonth(year, month);

    for (int i = 0; i < startDay; ++i)
        std::cout << "    ";

    for (int i = 1; i <= daysInMonth; ++i)
    {
        //Day* day = m->getOrCreateDay(i);
        std::cout << std::setw(2) << i << "  ";

        if ((startDay + i) % 7 == 0)
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
