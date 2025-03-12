#ifndef CSVFILE_H
#define CSVFILE_H

#include "Wifi.h"
#include <list>
class CsvFile
{
public:
    CsvFile();
    ~CsvFile();

    void writeWifiData();
    std::list<Wifi> readWifiData();
};

#endif // CSVFILE_H
