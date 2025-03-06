#ifndef TEXTFILE_H
#define TEXTFILE_H

#include "FileOperation.h"
class TextFile:public FileOperation
{
public:
    TextFile();
    ~TextFile();

    void writeData();
    std::list<Student> readData();
};

#endif // TEXTFILE_H
