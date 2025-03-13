#ifndef CSVFILE_H
#define CSVFILE_H

#include "Wifi.h"
#include <list>
class CsvFile
{
public:
    CsvFile();
    ~CsvFile();

    //void writeWifiData();
    void writeWifiData(std::list<Wifi> wifidata);
    std::list<Wifi> readWifiData();
private:
    std::list<Wifi> m_wifilist;
};

#endif // CSVFILE_H
