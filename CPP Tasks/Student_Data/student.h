#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class Student
{
private:
    std::string m_name;
    int m_age;
    std::string m_USN;
    std::string m_mobileNumber;
public:
    Student();
    ~Student();
    Student(std::string name,int age,std::string usn,std::string mobilenumber);

    std::string getName();
    int getAge();
    std::string getUSN();
    std::string getMobileNumber();
};

#endif // STUDENT_H
