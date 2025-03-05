#ifndef STAFF_H
#define STAFF_H
#include "personaldetails.h"
#include <string>

class Staff:public PersonalDetails
{
public:
    Staff();
    Staff(std::string staffID,std::string staffname,std::string staffnumber);
    std::string getstaffID();
    std::string getstaffname();
    std::string getstaffnumber();
    void set(std::string staffname,std::string staffnumber);
    ~Staff();
};

#endif // STAFF_H
