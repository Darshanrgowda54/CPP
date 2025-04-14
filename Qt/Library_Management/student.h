#ifndef STUDENT_H
#define STUDENT_H

#include "personaldetails.h"
class Student:public PersonalDetails
{
public:
    Student();
    ~Student();
    Student(std::string name, std::string Id);
};

#endif // STUDENT_H
