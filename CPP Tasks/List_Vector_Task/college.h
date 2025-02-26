#ifndef COLLEGE_H
#define COLLEGE_H
#include "staff.h"
#include "student.h"
#include <list>
#include <vector>

class College
{
private:
    std::list<Student>student;
    std::vector<Staff>staff;
public:
    College();
    ~College();
    void addStudent(int rollnumber,std::string name,int age);
    void deleteStudent(int rollnumber);
    void updateStudent(int rollnumber,std::string name,int age);
    void displayStudent();

    void addStaff(int staffID,std::string staffname,int staffnumber);
    void deleteStaff(int staffID);
    void updateStaff(int staffID,std::string staffname,int staffnumber);
    void displayStaff();
};

#endif // COLLEGE_H
