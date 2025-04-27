#ifndef YEAR_H
#define YEAR_H

#include <list>
#include "month.h"

class Year
{
public:
    Year(int year);
    ~Year();
    int getYear() const;
    Month* getOrCreateMonth(int month);

private:
    int m_year;
    std::list<Month*> m_months;
};

#endif // YEAR_H
