#ifndef DATE_H
#define DATE_H

class Date
{
public:
    Date();
    ~Date();

    int getDay();
    void setDay(int newDay);

    int getMonth();
    void setMonth(int newMonth);

    int getYear();
    void setYear(int newYear);

    bool operator<(const Date& rhs) const
    {
        if (m_year != rhs.m_year)
        {
            return m_year < rhs.m_year;
        }
        if (m_month != rhs.m_month)
        {
            return m_month < rhs.m_month;
        }
        return m_day < rhs.m_day;
    }

private:
    int m_day;
    int m_month;
    int m_year;
};

#endif // DATE_H
