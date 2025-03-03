#include "xml.h"
#include <iostream>
#include <list>

XML::XML()
{
    std::cout<<"XML Constructor Called"<<std::endl;
}

XML::~XML()
{
    std::cout<<"XML Destructor Called"<<std::endl;
}


std::list<Student> XML::readData()
{
    std::cout<<"XML readdata Function Called"<<std::endl;
    std::list<Student>studentlist;
    studentlist.push_back(Student("Darshan", 31, "USN0011", "1234567890"));
    studentlist.push_back(Student("Dhanush", 32, "USN0012", "0987654321"));
    studentlist.push_back(Student("Preetham",33, "USN0013", "1234567876"));

    return studentlist;
}
