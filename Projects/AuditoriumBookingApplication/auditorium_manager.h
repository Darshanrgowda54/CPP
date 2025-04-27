#ifndef AUDITORIUM_MANAGER_H
#define AUDITORIUM_MANAGER_H

#include "auditorium.h"
#include "date.h"
#include <map>
#include <string>
#include <vector>
typedef std::string auditoriumID;

class Auditorium_Manager
{
public:
    Auditorium_Manager();
    ~Auditorium_Manager();

    void addAuditorium();
    void bookAuditorium();
    void checkAvailableAuditorium();
    void displayAuditorium();

    int getBookedCount(Date& date);
    int getAvailableCount(Date& date);

    const std::map<Date, std::vector<auditoriumID>>& getBookingDateList() const;
private:
    std::map<auditoriumID,Auditorium*> m_auditoriumList;
    std::map<Date, std::vector<auditoriumID>> m_bookingDatelist;

    Date* m_date;
};

#endif // AUDITORIUM_MANAGER_H
