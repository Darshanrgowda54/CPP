#ifndef STUDENT_H
#define STUDENT_H

#include <string>
class Student
{
public:
    Student();
    ~Student();

    void setName(std::string *name);
    std::string getName();

    Student(const Student &S1);

    void operator =(const Student &S2);
private:
    std::string* m_name;
};

#endif // STUDENT_H
