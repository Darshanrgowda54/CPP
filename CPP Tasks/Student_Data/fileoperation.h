#ifndef FILEOPERATION_H
#define FILEOPERATION_H
#include "student.h"
#include <list>

class Fileoperation
{
public:
    Fileoperation();
    virtual ~Fileoperation();
    virtual std::list<Student> readData() = 0;
    //virtual std::list<Student> addData(std::string name,int age,std::string usn,std::string mobilenumber) = 0;
};

#endif // FILEOPERATION_H
