#include "json.h"
#include <iostream>
#include <list>

JSON::JSON()
{
    std::cout<<"JSON Constructor Called"<<std::endl;
}

JSON::~JSON()
{
    std::cout<<"JSON Destructor Called"<<std::endl;
}

std::list<Student> JSON::readData()
{
    std::cout<<"JSON readdata Function Called"<<std::endl;
    std::list<Student>studentlist;
    studentlist.push_back(Student("Darshan", 41, "USN0021", "1234567890"));
    studentlist.push_back(Student("Dhanush", 42, "USN0022", "0987654321"));
    studentlist.push_back(Student("Preetham",43, "USN0023", "1234567876"));

    return studentlist;
}

