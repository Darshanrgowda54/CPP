#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class Student
{
public:
    Student();
    ~Student();
    Student(std::string name,std::string mobilenumber);

    std::string getName();
    std::string getMobileNumber();
private:
    std::string m_name;
    std::string m_mobileNumber;
};

#endif // STUDENT_H
