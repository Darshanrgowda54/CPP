#ifndef LIBRARIAN_H
#define LIBRARIAN_H


#include "student.h"
#include <list>
#include "personaldetails.h"
class Librarian:public PersonalDetails
{
public:
    Librarian();
    ~Librarian();
    Librarian(std::string name, std::string Id);

    void requestBook();
    void addStudent();
    void displayBooks();
    void displayStudents();
private:
    std::list<Student*>m_studentlist;
};

#endif // LIBRARIAN_H
