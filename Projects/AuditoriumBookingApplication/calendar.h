#ifndef CALENDAR_H
#define CALENDAR_H

#include "date.h"
#include "year.h"
#include <list>
class Calendar
{
public:
    Calendar();
    ~Calendar();

    void printCalendar(int year, int month);
    void printTodayDate();
    void navigateMonths();
    Year* getYear(int year);
    Year* createYear(int year);

private:
    Date m_today;
    std::list<Year*> m_years;
};

#endif // CALENDAR_H
