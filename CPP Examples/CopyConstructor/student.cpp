#include "student.h"
#include <iostream>

Student::Student()
{
    std::cout<<"Constructor Called"<<std::endl;
}

Student::~Student()
{
    std::cout<<"Destructor Called"<<std::endl;
}

Student::Student(const Student &S1)
{
    std::cout<<"Copy Constructor"<<std::endl;
    this->a = new int(*S1.a); // i am creating memory and allocation S1.a value in line. creating new memory for S2 for storing value of S1.
}
