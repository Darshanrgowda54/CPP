#ifndef CALENDAR_H
#define CALENDAR_H

#include "auditorium_manager.h"
#include "date.h"
#include "year.h"
#include <list>
class Calendar
{
public:
    Calendar();
    ~Calendar();

    void printCalendar(int year, int month);
    void setBookingManager(Auditorium_Manager* m_bookingManager);
    void printTodayDate();
    void changeMonths();
    Year* getYear(int year);
    Year* createYear(int year);

private:
    Date m_date;
    std::list<Year*> m_years;
    Auditorium_Manager* m_bookingManager;
};

#endif // CALENDAR_H
