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

void College::addStudent(int rollnumber, std::string name, int age)
{
    student.push_back(Student(rollnumber,name,age));
}

void College::deleteStudent(int rollnumber)
{
    for(auto i = student.begin();i != student.end();i++)
    {
        if(i->getrollnumber() == rollnumber)
        {
            student.erase(i);
            std::cout<<"Student Deleted From College :"<<rollnumber<<std::endl;
            return;
        }
    }
}

void College::updateStudent(int rollnumber, std::string name, int age)
{
    for(auto i = student.begin();i != student.end();i++)
    {
        if(i->getrollnumber() == rollnumber)
        {
            i->set(name,age);
            return;
        }
    }
}

void College::displayStudent()
{
    for(auto i = student.begin();i != student.end();i++)
    {
        std::cout<<"Student RollNumber: "<<i->getrollnumber()<<std::endl;
        std::cout<<"Student Name: "<<i->getname()<<std::endl;
        std::cout<<"Student Age: "<<i->getage()<<std::endl;
    }
}

void College::addStaff(int staffID, std::string staffname, int staffnumber)
{
    staff.push_back(Staff(staffID,staffname,staffnumber));
}

void College::deleteStaff(int staffID)
{
    for(auto i = staff.begin();i != staff.end();i++)
    {
        if(i->getID() == staffID)
        {
            staff.erase(i);
            std::cout<<"Staff Deleted From College :"<<staffID<<std::endl;
            return;
        }
    }
}

void College::updateStaff(int staffID, std::string staffname, int staffnumber)
{
    for(auto i = staff.begin();i != staff.end();i++)
    {
        if(i->getID() == staffID)
        {
            i->set(staffname,staffnumber);
            return;
        }
    }
}

void College::displayStaff()
{
    for(auto i = staff.begin();i != staff.end();i++)
    {
        std::cout<<"Staff RollNumber: "<<i->getID()<<std::endl;
        std::cout<<"Staff Name: "<<i->getname()<<std::endl;
        std::cout<<"Staff Age: "<<i->getstaffnumber()<<std::endl;
    }
}
