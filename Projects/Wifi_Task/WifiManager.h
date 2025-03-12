#ifndef WIFIMANAGER_H
#define WIFIMANAGER_H

#include "Wifi.h"
#include <list>
class WifiManager
{
public:
    WifiManager();
    ~WifiManager();

    void displayWifiDetails();
    void wifimanager();
    void sortWifilist(std::list<Wifi>& wifiList);
    void connectWifi();
private:
    std::list<Wifi>m_list;
};

#endif // WIFIMANAGER_H
