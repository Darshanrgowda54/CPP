#ifndef LIBRARY_H
#define LIBRARY_H

#include "book.h"
#include "librarian.h"
#include <list>
class Library
{
public:
    Library();
    ~Library();

    void setLibrarian(Librarian *librarian);
    void addBook();;

    std::list<Book*> getBookList();

private:
    std::list<Book*>m_booklist;
    Librarian* m_librarian;
};

#endif // LIBRARY_H





