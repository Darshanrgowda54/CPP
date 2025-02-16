#ifndef STUDENT_H
#define STUDENT_H

#include <string>
template <typename A,typename B>
class Student
{
    std::string m_name;
    int m_age;
public:
    Student();
    ~Student();
    void addStudent(A name,B age);
};

#endif // STUDENT_H
