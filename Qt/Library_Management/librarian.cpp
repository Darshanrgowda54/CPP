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

void Librarian::requestBook()
{
    std::cout<<"Request Book Function Called"<<std::endl;
    std::string name, author;

    std::cout<<"Enter Book Name: ";
    std::cin>>name;
    std::cout<<"Enter Book Author: ";
    std::cin>>author;

    Library *library = new Library;
    for(auto book : library->getBookList())
    {
        if(book->getBookName() == name && book->getBookAuthor() == author)
        {
            std::cout << "Book " << book->getBookName() << "borrowed by " << /*student->getName() << */std::endl;
            return;
        }
        else
        {
            std::cout<<"Book Not Found"<<std::endl;
            return;
        }
    }
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
    Library *library = new Library;
    for(auto book : library->getBookList())
    {
        std::cout << " Title: " << book->getBookName()
                  << " Author: " << book->getBookAuthor()
                  << " ID: " << book->getBookId()<<std::endl;
    }

}

