#ifndef PERSONALDETAILS_H
#define PERSONALDETAILS_H
#include <string>

class PersonalDetails
{
protected:
    std::string m_name;
    std::string m_ID;
    int m_mobileNumber;
public:
    PersonalDetails();
    ~PersonalDetails();
};

#endif // PERSONALDETAILS_H
