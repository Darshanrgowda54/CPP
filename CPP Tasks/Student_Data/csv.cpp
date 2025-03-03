#include "csv.h"
#include <iostream>
#include <list>

CSV::CSV():Fileoperation()
{
    std::cout<<"CSV Constructor Called"<<std::endl;
}

CSV::~CSV()
{
    std::cout<<"CSV Destructor Called"<<std::endl;
}

std::list<Student> CSV::readData()
{
    std::cout<<"CSV readdata Function Called"<<std::endl;
    std::list<Student>studentlist;
    studentlist.push_back(Student("Darshan", 21, "USN001", "1234567890"));
    studentlist.push_back(Student("Dhanush", 22, "USN002", "0987654321"));
    studentlist.push_back(Student("Preetham",23, "USN003", "1234567876"));

    return studentlist;
}




// std::list<Student> CSV::addData(std::string name, int age, std::string usn, std::string mobilenumber)
// {
//     std::cout<<"CSV AddData Function Called"<<std::endl;
//     std::list<Student>studentlist;
//     studentlist.push_back(Student(name,age,usn,mobilenumber));
//     return student;
// }

// void CSV::readData()
// {
//     std::cout<<"CSV readdata Function Called"<<std::endl;
//     std::list<StudentManagement>studentlist;
//     studentlist.push_back(StudentManagement("Darshan", 20, "USN001", "1234567890"));
//     studentlist.push_back(StudentManagement("Dhanush", 22, "USN002", "0987654321"));
//     studentlist.push_back(StudentManagement("Preetham",23, "USN003", "1234567876"));

//     for (auto i = studentlist.begin();i != studentlist.end();i++)
//     {
//         std::cout<<"_________________________________________________________"<<std::endl;
//         std::cout<<std::endl;
//         std::cout << " Name: " << i->getName()
//         << "| Age: " << i->getAge()
//         << "| USN: " << i->getUSN()
//         << "| Mobile: " << i->getMobileNumber() << std::endl;
//         std::cout<<"_________________________________________________________"<<std::endl;
//     }
// }

