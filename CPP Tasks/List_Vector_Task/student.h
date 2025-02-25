#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class Student
{
private:
    int m_rollNumber;
    std::string m_name;
    int m_age;
public:
    //Student();
    Student(int rollnumber,std::string name, int age);
    int getrollnumber();
    std::string getname();
    int getage();
    void set(std::string name,int age);
    ~Student();
};

#endif // STUDENT_H
