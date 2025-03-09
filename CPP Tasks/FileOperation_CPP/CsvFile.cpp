#include "CsvFile.h"
#include <iostream>
#include <fstream>

CsvFile::CsvFile()
{
    std::cout<<"CSV Constructor Callled"<<std::endl;
}


CsvFile::~CsvFile()
{
    std::cout<<"CSV Destructor Called"<<std::endl;
}


void CsvFile::writeData()
{

    std::cout<<"CSV Write Function Called"<<std::endl;
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
    Student Studentcsv(name, mobilenumber,id,address);
    studentList.push_back(Studentcsv);

    std::ofstream csvfile("students.csv",std::ios::app);

    auto& student = studentList;
    for (auto i = student.begin();i != student.end();i++)
    {
        csvfile <<i->getName() << ","
                << i->getMobileNumber() << ","
                << i->getId() << ","
                << i->getAddress() << ","
                <<std::endl;
    }
    csvfile.close();
}


std::list<Student> CsvFile::readData()
{
    std::cout<<"CSV Read Function Called"<<std::endl;

    std::ifstream csvfile("students.csv");
    std::string name,mobilenumber,id,address;

    std::list<Student>studentlist;

    while (getline(csvfile, name, ',') && getline(csvfile, mobilenumber,',')
           && std::getline(csvfile,id,',') && std::getline(csvfile,address))
    {
        studentlist.push_back(Student(name,mobilenumber,id,address));
    }
    csvfile.close();
    return studentlist;
}
