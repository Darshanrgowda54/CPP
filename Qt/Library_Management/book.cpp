#include "book.h"
#include <iostream>

Book::Book()
{
    std::cout<<"Book Constructor Called"<<std::endl;
}

Book::~Book()
{
    std::cout<<"Book Destructor Called"<<std::endl;
}

Book::Book(std::string bookname, std::string bookAuthor, std::string bookId)
{
    std::cout<<"Book Parameter Constructor Called"<<std::endl;
    this->m_bookName = bookname;
    this->m_bookAuthor = bookAuthor;
    this->m_bookId = bookId;
}

std::string Book::bookName()
{
    return m_bookName;
}

void Book::setBookName(std::string newBookName)
{
    m_bookName = newBookName;
}

std::string Book::bookAuthor()
{
    return m_bookAuthor;
}

void Book::setBookAuthor(std::string newBookAuthor)
{
    m_bookAuthor = newBookAuthor;
}

std::string Book::bookId()
{
    return m_bookId;
}

void Book::setBookId(std::string newBookId)
{
    m_bookId = newBookId;
}
