#include "StudentManagement.h"
#include "CsvFile.h"
#include "FileOperation.h"
#include "TextFile.h"
#include <iostream>

StudentManagement::StudentManagement()
{
    std::cout<<"StudentManagement Constructor Called"<<std::endl;
}


StudentManagement::~StudentManagement()
{
    std::cout<<"StudentManagement Destructor Called"<<std::endl;
}


void StudentManagement::displaystudent()
{
    std::cout<<"Display Function Called"<<std::endl;

    for(auto i = m_list.begin();i != m_list.end();i++)
    {
        std::cout<<std::endl;
        std::cout << " Name: " << i->getName()
                  << "| Mobile: " << i->getMobileNumber()
                  <<"| ID: "<<i->getId()
                  <<"| Address: "<<i->getAddress()
                  << std::endl;
        std::cout<<std::endl;
    }
}


void StudentManagement::txtFileOperation()
{
    FileOperation *file = nullptr;
    int choice;

    while(true)
    {
        std::cout<<"\n1. Add Student"<<std::endl;
        std::cout<<"2. Display Student"<<std::endl;
        std::cout<<"3. Exit TextFile"<<std::endl;
        std::cout<<"Enter Your Choice: ";
        std::cin>>choice;

        switch (choice)
        {
        case 1:
            file = new TextFile;
            file->writeData();
            delete file;
            break;
        case 2:
            file = new TextFile;
            m_list = file->readData();
            displaystudent();
            delete file;
        case 3:
            return;
        default:
            std::cout<<"Invalid Choice"<<std::endl;
            break;
        }
    }
}


void StudentManagement::csvFileOperation()
{
    FileOperation *file = nullptr;
    int choice;

    while(true)
    {
        std::cout<<"\n1. Add Student"<<std::endl;
        std::cout<<"2. Display Student"<<std::endl;
        std::cout<<"3. Exit TextFile"<<std::endl;
        std::cout<<"Enter Your Choice: ";
        std::cin>>choice;

        switch (choice)
        {
        case 1:
            file = new CsvFile;
            file->writeData();
            delete file;
            break;
        case 2:
            file = new CsvFile;
            m_list = file->readData();
            displaystudent();
            delete file;
            file = nullptr;
        case 3:
            return;
        default:
            std::cout<<"Invalid Choice"<<std::endl;
            break;
        }
    }
}

