#ifndef AUDITORIUM_MANAGER_H
#define AUDITORIUM_MANAGER_H

#include "auditorium.h"
#include <map>
#include <string>
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

private:
    std::map<auditoriumID,Auditorium *> m_auditoriumList;
};

#endif // AUDITORIUM_MANAGER_H
