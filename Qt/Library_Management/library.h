#ifndef LIBRARY_H
#define LIBRARY_H

#include "book.h"
#include "librarian.h"
//#include "student.h"
#include <list>
class Library
{
public:
    Library();
    ~Library();

    void setLibrarian(Librarian *librarian);
    void addBook();
    //void addStudent();

    //std::list<Student*> getStudentList();
    std::list<Book*> getBookList();
private:
    // std::list<Student*>m_studentlist;
    std::list<Book*>m_booklist;
    Librarian* m_librarian;
};

#endif // LIBRARY_H





