#ifndef CSV_H
#define CSV_H
#include "fileoperation.h"
#include "student.h"

class CSV:public Fileoperation
{
private:
    std::list<Student>m_studentlist;
    std::list<Student>student;
public:
    CSV();
    ~CSV();
    std::list<Student> readData();
    //std::list<Student> addData(std::string name,int age,std::string usn,std::string mobilenumber);
};

#endif // CSV_H
