#include "library.h"
#include <iostream>

Library::Library()
{
    std::cout<<"Library Constructor Called"<<std::endl;
}

Library::~Library()
{
    std::cout<<"Library Destructor Called"<<std::endl;
}

void Library::setLibrarian(Librarian *librarian)
{
    std::cout<<"Set Librarian to Library Function Called"<<std::endl;
    this->m_librarian = librarian;
}

// std::list<Student*> Library::getStudentList()
// {
//     return m_studentlist;
// }

std::list<Book*> Library::getBookList()
{
    return m_booklist;
}

void Library::addBook()
{
    std::cout<<"Library Add Book Function Called"<<std::endl;

    m_booklist.push_back(new Book("Cpp","E Balagurusamy","1CPP123"));
    m_booklist.push_back(new Book("C","E Balagurusamy","1C123"));
    m_booklist.push_back(new Book("JAVA","PUNITH","1JAVA123"));
    m_booklist.push_back(new Book("PYTHON","E B SWAMY","1PYTHON123"));
}

// void Library::addStudent()
// {
//     std::cout<<"Library Add Student Function Called"<<std::endl;

//     m_studentlist.push_back(new Student("DARSHAN","1SB19CS001"));
//     m_studentlist.push_back(new Student("DHANUSH","1SB19CS002"));
//     m_studentlist.push_back(new Student("DEV","1SB19CS003"));
//     m_studentlist.push_back(new Student("THOR","1SB19CS004"));
// }
