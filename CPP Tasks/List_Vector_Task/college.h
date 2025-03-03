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
    void addStudent(std::string studentID,std::string studentname,int studentNumber);
    void deleteStudent(std::string studentID);
    void updateStudent(std::string studentID,std::string studentname,int studentNumber);
    void displayStudent();

    void addStaff(std::string staffID,std::string staffname,int staffnumber);
    void deleteStaff(std::string staffID);
    void updateStaff(std::string staffID,std::string staffname,int staffnumber);
    void displayStaff();
};

#endif // COLLEGE_H
