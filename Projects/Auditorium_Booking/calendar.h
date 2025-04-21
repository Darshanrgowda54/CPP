#ifndef CALENDAR_H
#define CALENDAR_H

class Calendar
{
public:
    Calendar();
    ~Calendar();

    void displayCalendar();

    int getDay();
    void setDay(int newDay);

    int getMonth();
    void setMonth(int newMonth);

    int getYear();
    void setYear(int newYear);

private:
    int m_day;
    int m_month;
    int m_year;
};

#endif // CALENDAR_H
