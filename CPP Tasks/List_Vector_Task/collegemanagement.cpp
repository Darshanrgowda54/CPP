#include "collegemanagement.h"
#include <iostream>

CollegeManagement::CollegeManagement()
{
    std::cout<<"CollegeManagement Constructor Called"<<std::endl;
}

void CollegeManagement::initStudent(std::list<Student> *student)
{
    m_student = student;
}

void CollegeManagement::initStaff(std::vector<Staff> *staff)
{
    m_staff = staff;
}
CollegeManagement::~CollegeManagement()
{
    std::cout<<"CollegeManagement Destructor Called"<<std::endl;
}

void CollegeManagement::addStudent(std::string studentID, std::string studentname, std::string studentNumber)
{
    std::cout<<"Add Student Function Called"<<std::endl;
    m_student->push_back(Student(studentID,studentname,studentNumber));
}

void CollegeManagement::deleteStudent(std::string studentID)
{
    for(auto i = m_student->begin();i != m_student->end();i++)
    {
        if(i->getstudentID() == studentID)
        {
            m_student->erase(i);
            std::cout<<"Student Deleted From College :"<<studentID<<std::endl;
            break;
        }
    }
}

void CollegeManagement::updateStudent(std::string studentID, std::string studentname, std::string studentNumber)
{
    for(auto i = m_student->begin();i != m_student->end();i++)
    {
        if(i->getstudentID() == studentID)
        {
            i->set(studentname,studentNumber);
            break;
        }
    }
}

void CollegeManagement::displayStudent()
{
    for(auto i = m_student->begin();i != m_student->end();i++)
    {
        std::cout<<"____________________________________"<<std::endl;
        std::cout<<"Student ID: "<<i->getstudentID()<<std::endl;
        std::cout<<"Student Name: "<<i->getstudentname()<<std::endl;
        std::cout<<"Student MobileNumber: "<<i->getstudentNumber()<<std::endl;
        std::cout<<"____________________________________"<<std::endl;
    }
}

void CollegeManagement::addStaff(std::string staffID, std::string staffname, std::string staffnumber)
{
    std::cout<<"Add Staff function Called"<<std::endl;
    m_staff->push_back(Staff(staffID,staffname,staffnumber));
}

void CollegeManagement::deleteStaff(std::string staffID)
{
    for(auto i = m_staff->begin();i != m_staff->end();i++)
    {
        if(i->getstaffID() == staffID)
        {
            m_staff->erase(i);
            std::cout<<"Staff Deleted From College :"<<staffID<<std::endl;
            return;
        }
    }
}

void CollegeManagement::updateStaff(std::string staffID, std::string staffname, std::string staffnumber)
{
    for(auto i = m_staff->begin();i != m_staff->end();i++)
    {
        if(i->getstaffID() == staffID)
        {
            i->set(staffname,staffnumber);
            return;
        }
    }
}

void CollegeManagement::displayStaff()
{
    for(auto i = m_staff->begin();i != m_staff->end();i++)
    {
        std::cout<<"____________________________________"<<std::endl;
        std::cout<<"Staff ID: "<<i->getstaffID()<<std::endl;
        std::cout<<"Staff Name: "<<i->getstaffname()<<std::endl;
        std::cout<<"Staff MobileNumber: "<<i->getstaffnumber()<<std::endl;
        std::cout<<"____________________________________"<<std::endl;
    }
}
