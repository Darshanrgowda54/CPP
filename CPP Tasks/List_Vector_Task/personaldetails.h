#ifndef PERSONALDETAILS_H
#define PERSONALDETAILS_H
#include <string>

class PersonalDetails
{
public:
    PersonalDetails();
    ~PersonalDetails();
protected:
    std::string m_name;
    std::string m_ID;
    std::string m_mobileNumber;
};

#endif // PERSONALDETAILS_H
