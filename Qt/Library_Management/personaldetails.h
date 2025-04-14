#ifndef PERSONALDETAILS_H
#define PERSONALDETAILS_H

#include <string>
class PersonalDetails
{
public:
    PersonalDetails();
    ~PersonalDetails();
    PersonalDetails(std::string name, std::string Id);

    std::string getName();
    void setName(std::string newName);

    std::string getId();
    void setId(std::string newId);
protected:
    std::string m_name;
    std::string m_Id;
};

#endif // PERSONALDETAILS_H
