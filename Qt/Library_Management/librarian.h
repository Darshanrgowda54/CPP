#ifndef LIBRARIAN_H
#define LIBRARIAN_H

//#include "library.h"
class Library;
#include "student.h"
#include <list>
#include "personaldetails.h"
class Librarian:public PersonalDetails
{
public:
    Librarian();
    ~Librarian();
    Librarian(std::string name, std::string Id);

    void setLibrary(Library* library);

    void addStudent();
    void displayBooks();
    void displayStudents();
private:
    Library* m_library;
    std::list<Student*>m_studentlist;
};

#endif // LIBRARIAN_H
