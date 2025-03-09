#include "TextFile.h"
#include "student.h"
#include <iostream>
#include <fstream>

TextFile::TextFile()
{
    std::cout<<"TextFile Constructor Called"<<std::endl;
}


TextFile::~TextFile()
{
    std::cout<<"TextFile Constructor Called"<<std::endl;
}


void TextFile::writeData()
{
    std::cout<<"TextFile Write Function Called"<<std::endl;
    std::string name,mobilenumber,id,address;

    std::cout << "Enter Name: ";
    std::cin >> name;
    std::cout << "Enter Mobile Number: ";
    std::cin >> mobilenumber;
    std::cout<< "Enter ID: ";
    std::cin>> id;
    std::cout<< "Enter Address: ";
    std::cin>> address;

    std::list<Student> studentList;
    Student Studenttext(name, mobilenumber,id,address);
    studentList.push_back(Studenttext);

    std::ofstream textfile("students.txt",std::ios::app);

    auto& student = studentList;
    for (auto i = student.begin();i != student.end();i++)
    {
        textfile <<i->getName() << " "
                 << i->getMobileNumber() << " "
                 << i->getId() << " "
                 << i->getAddress() << " "
                 <<std::endl;
    }
    textfile.close();
}


std::list<Student> TextFile::readData()
{
    std::cout << "TextFile Read Function Called" << std::endl;

    std::ifstream textfile("students.txt");
    std::string name,mobilenumber,id,address;

    std::list<Student>studentlist;

    while (getline(textfile, name, ' ') && getline(textfile, mobilenumber,' ')
           && std::getline(textfile,id,' ') && std::getline(textfile,address))
    {
        studentlist.push_back(Student(name,mobilenumber,id,address));
        // std::cout << "\nStudent Name: " << name << std::endl;
        // std::cout << "Student Number: " << mobilenumber << std::endl;
    }
    textfile.close();
    return studentlist;
}





































// void TextFile::addData()
// {
//     std::cout<<"TextFile Add Function Called"<<std::endl;
//     std::string name,mobilenumber;

//     std::cout << "Enter Name: ";
//     std::cin >> name;
//     std::cout << "Enter Mobile Number: ";
//     std::cin >> mobilenumber;

//     Student newStudent(name, mobilenumber);
//     std::list<Student> studentList;
//     studentList.push_back(newStudent);
//     writeData(studentList);
// }
