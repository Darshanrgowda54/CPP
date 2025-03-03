#ifndef STUDENT_H
#define STUDENT_H
#include "personaldetails.h"
#include <string>

class Student:public PersonalDetails
{
public:
    //Student();
    Student(std::string studentID, std::string studentname, int studentNumber);
    std::string getstudentID();
    std::string getstudentname();
    int getstudentNumber();
    void set(std::string name, int mobileNumber);
    ~Student();
};

#endif // STUDENT_H
