#include "CsvFile.h"
#include <iostream>
#include <fstream>

CsvFile::CsvFile()
{
    std::cout<<"CSV File Constructor Called"<<std::endl;
}


CsvFile::~CsvFile()
{
    std::cout<<"CSV File Destructor Called"<<std::endl;
}


void CsvFile::writeWifiData()
{
    std::cout<<"CSV Write Data Function Called"<<std::endl;

    float signalStrength;
    std::string name,status,password;

    std::cout<<"Enter Wifi Name: ";
    std::cin>>name;
    std::cout<<"Enter Wifi SignalStrength: ";
    std::cin>>signalStrength;
    std::cout<<"Enter Wifi Status: ";
    std::cin>>status;
    std::cout<<"Enter wifi Password: ";
    std::cin>>password;

    std::list<Wifi>wifilist;
    Wifi wificsv(name,signalStrength,status,password);
    wifilist.push_back(wificsv);


    auto& wifi = wifilist;
    std::ofstream csvfile("WifiList.csv",std::ios::app);
    {
        for(auto i = wifi.begin();i != wifi.end();i++)
        {
            csvfile <<i->getName()<<","
                    <<i->getSignalStrength()<<","
                    <<i->getStatus()<<","
                    <<i->getPassword()<<std::endl;
        }
    }
    csvfile.close();
}


std::list<Wifi> CsvFile::readWifiData()
{
    std::cout<<"CSV Read Data Function Called"<<std::endl;

    std::ifstream csvfile("WifiList.csv");
    float signalStrength;
    std::string name,status,password;

    std::list<Wifi>wifilist;

    while (std::getline(csvfile,name,',') && csvfile>>signalStrength && csvfile.ignore()
           && std::getline(csvfile,status,',') && std::getline(csvfile,password))
    {
        wifilist.push_back(Wifi(name,signalStrength,status,password));
    }
    csvfile.close();
    return wifilist;
}
