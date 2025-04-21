#ifndef AUDITORIUM_H
#define AUDITORIUM_H

#include <string>

struct Date{
    int day;
    int month;
    int year;
};

class Auditorium
{
public:
    Auditorium();
    ~Auditorium();
    Auditorium(std::string name, std::string status);

    std::string getName();
    void setName(std::string newName);

    std::string getStatus();
    void setStatus(std::string newStatus);

    Date getBookDate();
    void setBookDate(int day, int month, int year);

private:
    std::string m_name;
    std::string m_status;
    Date m_bookDate;
};

#endif // AUDITORIUM_H
