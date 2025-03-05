#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class Student
{
public:
    Student();
    ~Student();
    Student(std::string name,int age,std::string usn,std::string mobilenumber);

    std::string getName();
    int getAge();
    std::string getUSN();
    std::string getMobileNumber();
private:
    std::string m_name;
    int m_age;
    std::string m_USN;
    std::string m_mobileNumber;
};

#endif // STUDENT_H
