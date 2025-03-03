#include "studentmanagement.h"
#include "csv.h"
#include "json.h"
#include "xml.h"
#include <iostream>

enum
{
    CSVFILE = 1,
    XMLFILE,
    JSONFILE,
    EXIT
};

StudentManagement::StudentManagement()
{
    std::cout<<"StudentManagement Constructor Called"<<std::endl;
}


StudentManagement::~StudentManagement()
{
    std::cout << "StudentManagement Destructor Called" << std::endl;
}

void StudentManagement::displaystudent()
{
    std::cout<<"Display Function Called"<<std::endl;

    for(auto i = m_list.begin();i != m_list.end();i++)
    {
        std::cout<<"_________________________________________________________"<<std::endl;
        std::cout<<std::endl;
        std::cout << " Name: " << i->getName()
                  << "| Age: " << i->getAge()
                  << "| USN: " << i->getUSN()
                  << "| Mobile: " << i->getMobileNumber() << std::endl;
        std::cout<<"_________________________________________________________"<<std::endl;
    }
}

void StudentManagement::filechoice()
{
    Fileoperation *file = nullptr;
    int choice;
    while(true)
    {
        std::cout<<"\n____Student Management____"<<std::endl;
        std::cout<<"1. CSV File"<<std::endl;
        std::cout<<"2. XML File"<<std::endl;
        std::cout<<"3. JSON File"<<std::endl;
        std::cout<<"4. Exit"<<std::endl;
        std::cout<<"Select the File: ";
        std::cin>>choice;

        switch (choice)
        {
        case CSVFILE:
        {
            file = new CSV;
            this->m_list = file->readData();
            displaystudent();
            delete file;
            break;
        }
        case XMLFILE:
            file = new XML;
            this->m_list = file->readData();
            displaystudent();
            break;
        case JSONFILE:
            file = new JSON;
            this->m_list = file->readData();
            displaystudent();
            break;
        case EXIT:
            return;
            break;
        default:
            std::cout<<"Invalid Choice"<<std::endl;
            break;
        }
    }
}

