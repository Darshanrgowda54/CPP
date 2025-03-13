#include "WifiManager.h"
#include "CsvFile.h"
#include <iostream>

WifiManager::WifiManager()
{
    std::cout<<"Wifi Manager Constructor Called"<<std::endl;
    m_csvfile = new CsvFile();
    m_wifiList  = m_csvfile->readWifiData();
}


WifiManager::~WifiManager()
{
    std::cout<<"Wifi Manager Destructor Called"<<std::endl;

    delete m_csvfile;
}


void WifiManager::sortWifilist()
{
    std::cout<<"Sort Function Called"<<std::endl;

    for (auto i = m_wifiList.begin(); i != m_wifiList.end(); i++)
    {
        //std::cout<<"Enter 1 Loop"<<std::endl;
        for (auto j = std::next(i); j != m_wifiList.end(); j++)
        {
            //std::cout<<"Enter 2 Loop"<<std::endl;
            if (i->getStatus() != "Connected" && j->getStatus() == "Connected")
            {
                std::cout<<i->getName()<<"             "<<j->getName()<<std::endl;
                std::iter_swap(i, j);
                //std::cout<<" 1 IF STATMENT "<<std::endl;
                std::cout<<i->getName()<<"             "<<j->getName()<<std::endl;
                // std::cout<<" 1 IF END";
                // std::cout<<std::endl;
            }
            if (i->getStatus() == "Available" && j->getStatus() == "Saved")
            {
                std::cout<<i->getName()<<"             "<<j->getName()<<std::endl;
                std::iter_swap(i, j);
                //std::cout<<std::endl;
                //std::cout<<" 2 IF STATMENT "<<std::endl;
                std::cout<<i->getName()<<"             "<<j->getName()<<std::endl;
                // std::cout<<" 2 IF END ";
                // std::cout<<std::endl;
            }
            if (i->getStatus() == j->getStatus() && i->getSignalStrength() < j->getSignalStrength())
            {
                std::cout<<i->getName()<<"             "<<j->getName()<<std::endl;
                std::iter_swap(i, j);
                //std::cout<<std::endl;
                //std::cout<<" 3 IF STATMENT "<<std::endl;
                std::cout<<i->getName()<<"             "<<j->getName()<<std::endl;
                // std::cout<<" 3 IF END ";
                // std::cout<<std::endl;
            }
            //std::cout<<"Exit 2 Loop"<<std::endl;
        }
        //std::cout<<"Exit 2 Loop"<<std::endl;
    }
}


void WifiManager::displayWifiDetails()
{
    std::cout<<"Display Function Called"<<std::endl;

    //sortWifilist();

    for(auto i = m_wifiList.begin();i != m_wifiList.end();i++)
    {
        std::cout<<std::endl;
        std::cout<<"Name: "<<i->getName()<<"| ";
        std::cout<<"Signal Strength: "<<i->getSignalStrength()<<"| ";
        std::cout<<"Status: "<<i->getStatus()<<"| ";
        std::cout<<"Password: "<<i->getPassword()<<std::endl;
    }
}


void WifiManager::connectWifi()
{
    std::cout<<"Connect Wifi Function Called"<<std::endl;
    displayWifiDetails();

    std::string password;
    std::string wifiName;
    std::cout<<std::endl << "Enter the name of the Wi-Fi to connect: ";
    std::cin >> wifiName;

    for (auto i = m_wifiList.begin(); i != m_wifiList.end(); i++)
    {
        if (i->getStatus() == "Connected")
        {
            std::cout <<"Disconnected Wifi: "<< i->getName()<< std::endl;
            i->setStatus("Saved");
            //m_csvfile->writeWifiData(m_wifiList);
        }
        if(i->getName() == wifiName)
        {
            if(i->getStatus() == "Saved")
            {
                i->setStatus("Connected");
                //m_csvfile->writeWifiData(m_wifiList);
                displayWifiDetails();
                return;
            }
            else if(i->getStatus() == "Available")
            {
                std::cout<<"Enter the Password: ";
                std::cin>>password;
                if(i->getPassword() == password)
                {
                    i->setStatus("Connected");
                    //m_csvfile->writeWifiData(m_wifiList);
                    displayWifiDetails();
                    return;
                }
                else
                {
                    std::cout<< "Incorrect password"<< std::endl;
                }
                return;
            }
        }
    }
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
    //m_csvfile m_csvfile;

    int choice;
    while(true)
    {
        std::cout<<"\n1.Add Wifi"<<std::endl;
        std::cout<<"2.Display Wifi Details"<<std::endl;
        std::cout<<"3.Connect Wifi"<<std::endl;
        std::cout<<"4.Exit"<<std::endl;
        std::cout<<"Enter your Choice: ";
        std::cin>>choice;

        switch (choice)
        {
        case WriteData:
            //m_csvfile->writeWifiData();
            break;
        case ReadData:
            //m_wifiList = m_csvfile.readWifiData();
            displayWifiDetails();
        break;
        case Connect:
            //m_wifiList = m_csvfilereadWifiData();
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




