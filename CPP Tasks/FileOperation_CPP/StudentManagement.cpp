#include "StudentManagement.h"
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

    m_list.push_back(Student("Darshan R Gowda","7530092988"));
    for(auto i = m_list.begin();i != m_list.end();i++)
    {
        std::cout<<std::endl;
        std::cout<<std::endl;
        std::cout << " Name: " << i->getName()
                  << "| Mobile: " << i->getMobileNumber() << std::endl;
        std::cout<<std::endl;
    }
}



void StudentManagement::filechoice()
{
    FileOperation *fileoperation = nullptr;

    int choice;

    while(true)
    {
        std::cout<<"Student Management"<<std::endl;
        std::cout<<"1. Add Student"<<std::endl;
        std::cout<<"2. Display Student"<<std::endl;
        std::cout<<"3. Exit"<<std::endl;
        std::cout<<"Enter your Choice: ";
        std::cin>>choice;

        switch (choice)
        {
        case 1:
            fileoperation = new TextFile;
            fileoperation->writeData();
            delete fileoperation;
            break;
        case 2:
            fileoperation = new TextFile;
            //m_list = fileoperation->readData();
            displaystudent();
            delete fileoperation;
            break;
        case 3:
            return;
        default:
            std::cout<<"Invalid"<<std::endl;
            break;
        }
    }

}

