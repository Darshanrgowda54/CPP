#ifndef STUDENTMANAGEMENT_H
#define STUDENTMANAGEMENT_H
#include "FileOperation.h"
#include "student.h"
#include <list>

class StudentManagement
{
public:
    StudentManagement();
    ~StudentManagement();

    void displaystudent();
    void txtFileOperation();
    void csvFileOperation();
private:
    std::list<Student>m_list;
    FileOperation *m_file;
};

#endif // STUDENTMANAGEMENT_H
