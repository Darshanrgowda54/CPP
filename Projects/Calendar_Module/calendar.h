#ifndef CALENDER_H
#define CALENDER_H
#include "year.h"
#include<list>

class Calendar
{
public:
    Calendar();
    ~Calendar();
    void printMonthCalendar(int year, int month);
    void printTodayDate();
    Year* getOrCreateYear(int year);

private:
    std::list<Year*> m_years;
};

#endif // CALENDER_H
