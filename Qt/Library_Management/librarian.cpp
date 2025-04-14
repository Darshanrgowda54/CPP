#include "librarian.h"
#include "library.h"
#include <iostream>

Librarian::Librarian()
{
    std::cout<<"Librarian Constructor Called"<<std::endl;
}

Librarian::~Librarian()
{
    std::cout<<"Librarian Destructor Called"<<std::endl;
}

Librarian::Librarian(std::string name, std::string Id)
{
    std::cout<<"Librarian Parameter Constructor Called"<<std::endl;
    this->m_name = name;
    this->m_Id = Id;
}

void Librarian::setLibrary(Library *l)
{
    std::cout<<"Set Library to Librarian Function Called"<<std::endl;
    this->m_library = l;
}


void Librarian::addStudent()
{
    std::cout<<"Library Add Student Function Called"<<std::endl;

    m_studentlist.push_back(new Student("DARSHAN","1SB19CS001"));
    m_studentlist.push_back(new Student("DHANUSH","1SB19CS002"));
    m_studentlist.push_back(new Student("DEV","1SB19CS003"));
    m_studentlist.push_back(new Student("THOR","1SB19CS004"));
}


void Librarian::displayStudents()
{
    std::cout<<"Display Students Function Called"<<std::endl;

    std::cout <<"List of students"<<std::endl;
    for (auto student : m_studentlist)
    {
        std::cout << " Name: " << student->getName()
        << " ID: " << student->getId() <<std::endl;
    }
}

void Librarian::displayBooks()
{
    std::cout<<"Display Books Function Called"<<std::endl;

    std::cout << "List of books"<<std::endl;
    for (auto book : m_library->getBookList())
    {
        std::cout << " Title: " << book->bookName()
        << " Author: " << book->bookAuthor()
        << " ID: " << book->bookId() <<std::endl;
    }
}

