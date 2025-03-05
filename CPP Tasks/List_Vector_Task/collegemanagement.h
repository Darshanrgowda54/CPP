#ifndef COLLEGEMANAGEMENT_H
#define COLLEGEMANAGEMENT_H
#include "staff.h"
#include "student.h"
#include <list>
#include <string>
#include <vector>

class CollegeManagement
{

public:
    CollegeManagement();
    ~CollegeManagement();

    void addStudent(std::string studentID,std::string studentname,std::string studentNumber);
    void deleteStudent(std::string studentID);
    void updateStudent(std::string studentID,std::string studentname,std::string studentNumber);
    void displayStudent();

    void addStaff(std::string staffID,std::string staffname,std::string staffnumber);
    void deleteStaff(std::string staffID);
    void updateStaff(std::string staffID,std::string staffname,std::string staffnumber);
    void displayStaff();

    void initStudent(std::list<Student>* student);
    void initStaff(std::vector<Staff>* staff);
private:
    std::list<Student>* m_student;
    std::vector<Staff>* m_staff;
};

#endif // COLLEGEMANAGEMENT_H
