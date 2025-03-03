#ifndef STAFF_H
#define STAFF_H
#include "personaldetails.h"
#include <string>

class Staff:public PersonalDetails
{
public:
    Staff(std::string staffID,std::string staffname,int staffnumber);
    std::string getstaffID();
    std::string getstaffname();
    int getstaffnumber();
    void set(std::string staffname,int staffnumber);
    ~Staff();
};

#endif // STAFF_H
