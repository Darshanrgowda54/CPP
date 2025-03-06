#ifndef STUDENTMANAGEMENT_H
#define STUDENTMANAGEMENT_H
#include "student.h"
#include <list>

class StudentManagement
{
public:
    StudentManagement();
    ~StudentManagement();

    void displaystudent();
    void filechoice();
private:
    std::list<Student>m_list;
};

#endif // STUDENTMANAGEMENT_H
