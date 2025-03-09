#ifndef CSVFILE_H
#define CSVFILE_H

#include "FileOperation.h"
class CsvFile: public FileOperation
{
public:
    CsvFile();
    ~CsvFile();

    void writeData();
    std::list<Student> readData();
};

#endif // CSVFILE_H
