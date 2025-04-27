#ifndef YEAR_H
#define YEAR_H

#include "month.h"
#include <list>
class Year
{
public:
    Year(int year);
    ~Year();

    int getYear();
    Month* getMonth(int month);
    Month* createMonth(int month);

private:
    int m_year;
    std::list<Month*> m_months;
};

#endif // YEAR_H
