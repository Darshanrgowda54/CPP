#ifndef FILEOPERATION_H
#define FILEOPERATION_H

#include "student.h"
#include <list>

class FileOperation
{
public:
    FileOperation();
    virtual ~FileOperation();

    virtual void writeData() = 0;
    virtual std::list<Student> readData() = 0;
};

#endif // FILEOPERATION_H
