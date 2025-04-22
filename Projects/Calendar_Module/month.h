#ifndef MONTH_H
#define MONTH_H

#include "day.h"
#include<list>

class Month
{
public:
    Month(int month);
    ~Month();
    int getMonth();
    Day* getOrCreateDay(int day);

private:
    int m_month;
    std::list<Day*> m_days;
};

#endif // MONTH_H
