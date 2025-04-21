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
