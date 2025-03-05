#ifndef STUDENT_H
#define STUDENT_H
#include "personaldetails.h"
#include <string>

class Student:public PersonalDetails
{
public:
    Student ();
    Student(std::string studentID, std::string studentname, std::string studentNumber);
    std::string getstudentID();
    std::string getstudentname();
    std::string getstudentNumber();
    void set(std::string name, std::string mobileNumber);
    ~Student();
};

#endif // STUDENT_H
