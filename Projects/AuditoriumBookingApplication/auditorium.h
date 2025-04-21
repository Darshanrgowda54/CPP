#ifndef AUDITORIUM_H
#define AUDITORIUM_H

#include <string>
class Auditorium
{
public:
    Auditorium();
    ~Auditorium();
    Auditorium(std::string id, std::string name, std::string status);

    std::string getID();
    void setID(std::string newID);

    std::string getName();
    void setName(std::string newName);

    std::string getStatus();
    void setStatus(std::string newStatus);

private:
    std::string m_ID;
    std::string m_name;
    std::string m_status;
};

#endif // AUDITORIUM_H
