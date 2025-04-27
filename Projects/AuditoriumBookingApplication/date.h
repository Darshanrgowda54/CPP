#ifndef DATE_H
#define DATE_H

class Date
{
public:
    Date();
    Date(int day,int month, int year);
    ~Date();

    int getDay();
    void setDay(int newDay);

    int getMonth();
    void setMonth(int newMonth);

    int getYear();
    void setYear(int newYear);

    Date getCurrentDate() const;

    bool operator<(const Date& date)const;
private:
    int m_day;
    int m_month;
    int m_year;
};

#endif // DATE_H
