#include "Student.h"
#include <iostream>

using namespace std;

int main()
{
    Student* s1 = new Student;
    s1->setName(new std::string("Darshan"));
    std::cout<<"S1: "<<s1->getName()<<std::endl;

    Student* s2 = new Student(*s1);
    // s2 = s1;
    std::cout<<"S2: "<<s2->getName()<<std::endl;
    // s2->setName("Dhanush");

    delete s1;
    std::cout<<"S2: "<<s2->getName()<<std::endl;
    delete s2;
    return 0;
}


