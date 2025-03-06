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
    std::string name,mobilenumber;

    std::cout << "Enter Name: ";
    std::cin >> name;
    std::cout << "Enter Mobile Number: ";
    std::cin >> mobilenumber;

    Student newStudent(name, mobilenumber);
    std::list<Student> studentList;
    studentList.push_back(newStudent);


    std::cout<<"TextFile Write Function Called"<<std::endl;
    std::ofstream file("students.txt",std::ios::app);

    auto& student = studentList;
    for (auto i = student.begin();i != student.end();i++)
    {
        file <<i->getName() << "," << i->getMobileNumber() <<std::endl;
    }
    file.close();
}

std::list<Student> TextFile::readData()
{
    std::cout << "TextFile Read Function Called" << std::endl;
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
