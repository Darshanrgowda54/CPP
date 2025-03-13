#ifndef WIFIMANAGER_H
#define WIFIMANAGER_H

#include "Wifi.h"
#include <list>
#include "CsvFile.h"
class WifiManager
{
public:
    WifiManager();
    ~WifiManager();

    void wifimanager();
    void displayWifiDetails();
    void sortWifilist();
    void connectWifi();
private:
    std::list<Wifi> m_wifiList;
    CsvFile* m_csvfile;
};

#endif // WIFIMANAGER_H
