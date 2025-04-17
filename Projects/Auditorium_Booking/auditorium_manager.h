#ifndef AUDITORIUM_MANAGER_H
#define AUDITORIUM_MANAGER_H

#include "auditorium.h"
#include "calendar.h"
#include <vector>
class Auditorium_Manager
{
public:
    Auditorium_Manager();
    ~Auditorium_Manager();

    void addAuditorium();
    void displayAuditorium();
    void bookAuditorium();
    void bookedStatus();
    void availableAuditorium();
private:
    std::vector<Auditorium*> m_auditoriumList;
    Calendar* m_calendar;
};

#endif // AUDITORIUM_MANAGER_H
