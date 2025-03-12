#include "WifiManager.h"
#include "CsvFile.h"
#include <algorithm>
#include <iostream>

WifiManager::WifiManager()
{
    std::cout<<"Wifi Manager Constructor Called"<<std::endl;
}

WifiManager::~WifiManager()
{
    std::cout<<"Wifi Manager Destructor Called"<<std::endl;
}


// bool compareWifi(Wifi &a, Wifi &b)
// {
//     if (a.getStatus() == "Connected" && b.getStatus()!= "Connected")
//     {
//         return true;
//     }
//     if (a.getStatus() == "Saved" && b.getStatus() == "Available")
//     {
//         return true;
//     }
//     if (a.getStatus() == b.getStatus())
//     {
//         return a.getSignalStrength() > b.getSignalStrength();
//     }
//     return false;
// }



void WifiManager::sortWifilist(std::list<Wifi>& wifiList)
{
    std::cout<<"Sort Function Called"<<std::endl;

    for (auto i = wifiList.begin(); i != wifiList.end(); i++)
    {
        for (auto j = next(i); j != wifiList.end(); j++)
        {
            if (i->getStatus() != "Connected" && j->getStatus() == "Connected")
            {
                std::iter_swap(i, j);
            }
            if (i->getStatus() == "Available" && j->getStatus() == "Saved")
            {
                std::iter_swap(i, j);
            }
            if (i->getStatus() == j->getStatus() && i->getSignalStrength() < j->getSignalStrength())
            {
                std::iter_swap(i, j);
            }
        }
    }
}



void WifiManager::displayWifiDetails()
{
    std::cout<<"Display Function Called"<<std::endl;

    //m_list.sort(compareWifi);
    sortWifilist(m_list);

    for(auto i = m_list.begin();i != m_list.end();i++)
    {
        std::cout<<std::endl;
        std::cout<<"Wifi Name: "<<i->getName()<<"| ";
        std::cout<<"Wifi Name: "<<i->getSignalStrength()<<"| ";
        std::cout<<"Wifi Name: "<<i->getStatus()<<"| ";
        std::cout<<"Wifi Name: "<<i->getPassword()<<std::endl;
        std::cout<<std::endl;
    }
}


void WifiManager::connectWifi()
{

}



enum
{
    WriteData = 1,
    ReadData,
    Connect,
    Exit
};


void WifiManager::wifimanager()
{
    CsvFile csvfile;

    int choice;
    while(true)
    {
        std::cout<<"\n1.Add Wifi Details"<<std::endl;
        std::cout<<"2.Display Wifi Details"<<std::endl;
        std::cout<<"3.Connect Wifi"<<std::endl;
        std::cout<<"4.Exit"<<std::endl;
        std::cout<<"Enter your Choice: ";
        std::cin>>choice;

        switch (choice)
        {
        case WriteData:
            csvfile.writeWifiData();
            break;
        case ReadData:
            m_list = csvfile.readWifiData();
            displayWifiDetails();
        break;
        case Connect:
            m_list = csvfile.readWifiData();
            connectWifi();
            break;
        case Exit:
            return;
        default:
            std::cout<<"Invalid Choice"<<std::endl;
            break;
        }
    }
}




