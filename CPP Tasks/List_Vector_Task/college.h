#ifndef COLLEGE_H
#define COLLEGE_H

#include "collegemanagement.h"
#include "staff.h"
#include "student.h"
#include <vector>
#include <list>

class College
{
public:
    College();
    ~College();
    void functionOperation();
private:
    std::list<Student>m_studentlist;
    std::vector<Staff>m_stafflist;
    CollegeManagement *m_management;
    Student *m_student;
    Staff *m_staff;
};

#endif // COLLEGE_H
