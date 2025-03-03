#include "college.h"
#include <iostream>

College::College()
{
    std::cout<<"College Constructor Called"<<std::endl;
}

College::~College()
{
    std::cout<<"College Destructor Called"<<std::endl;
}

void College::addStudent(std::string studentID, std::string studentname, int studentNumber)
{
    student.push_back(Student(studentID,studentname,studentNumber));
}

void College::deleteStudent(std::string studentID)
{
    for(auto i = student.begin();i != student.end();i++)
    {
        if(i->getstudentID() == studentID)
        {
            student.erase(i);
            std::cout<<"Student Deleted From College :"<<studentID<<std::endl;
            break;
        }
    }
    std::cout<<"Entered StudentID Not Found"<<std::endl;
}

void College::updateStudent(std::string studentID, std::string studentname, int studentNumber)
{
    for(auto i = student.begin();i != student.end();i++)
    {
        if(i->getstudentID() == studentID)
        {
            i->set(studentname,studentNumber);
            break;
        }
    }
    std::cout<<"Entered StudentID Not Found"<<std::endl;
}

void College::displayStudent()
{
    for(auto i = student.begin();i != student.end();i++)
    {
        std::cout<<"____________________________________"<<std::endl;
        std::cout<<"Student ID: "<<i->getstudentID()<<std::endl;
        std::cout<<"Student Name: "<<i->getstudentname()<<std::endl;
        std::cout<<"Student MobileNumber: "<<i->getstudentNumber()<<std::endl;
        std::cout<<"____________________________________"<<std::endl;
    }
}

void College::addStaff(std::string staffID, std::string staffname, int staffnumber)
{
    staff.push_back(Staff(staffID,staffname,staffnumber));
}

void College::deleteStaff(std::string staffID)
{
    for(auto i = staff.begin();i != staff.end();i++)
    {
        if(i->getstaffID() == staffID)
        {
            staff.erase(i);
            std::cout<<"Staff Deleted From College :"<<staffID<<std::endl;
            return;
        }
    }
    std::cout<<"Entered StaffID Not Found"<<std::endl;
}

void College::updateStaff(std::string staffID, std::string staffname, int staffnumber)
{
    for(auto i = staff.begin();i != staff.end();i++)
    {
        if(i->getstaffID() == staffID)
        {
            i->set(staffname,staffnumber);
            return;
        }
    }
    std::cout<<"Entered StaffID Not Found"<<std::endl;
}

void College::displayStaff()
{
    for(auto i = staff.begin();i != staff.end();i++)
    {
        std::cout<<"____________________________________"<<std::endl;
        std::cout<<"Staff ID: "<<i->getstaffID()<<std::endl;
        std::cout<<"Staff Name: "<<i->getstaffname()<<std::endl;
        std::cout<<"Staff MobileNumber: "<<i->getstaffnumber()<<std::endl;
        std::cout<<"____________________________________"<<std::endl;
    }
}
