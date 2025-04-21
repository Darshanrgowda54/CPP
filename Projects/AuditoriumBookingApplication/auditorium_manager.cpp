#include "auditorium_manager.h"
#include "date.h"
#include <iostream>

Auditorium_Manager::Auditorium_Manager()
{
    std::cout<<"Auditorium Manager Constructor Called"<<std::endl;
}

Auditorium_Manager::~Auditorium_Manager()
{
    for (const auto& auditorium : m_auditoriumList)
    {
        delete auditorium.second;
    }
    m_auditoriumList.clear();
    std::cout<<"Auditorium Manager Destructor Called"<<std::endl;
}

void Auditorium_Manager::addAuditorium()
{
    std::cout<<"Add Auditorium Function Called"<<std::endl;

    // std::string Id, name;
    // std::string status = "Available";

    // std::cout<<"Enter Auditorium ID: ";
    // std::cin>>Id;
    // std::cout<<"Enter Auditorium Name: ";
    // std::cin>>name;

    // if (m_auditoriumList.find(Id) == m_auditoriumList.end())
    // {
    //     m_auditoriumList[Id] = new Auditorium(Id, name, status);
    //     std::cout << "Auditorium added successfully" << std::endl;
    // } else {
    //     std::cout << "Auditorium with this ID already exists" << std::endl;
    // }

    for(int i = 1; i <= 10; i++)
    {
        std::string auditoriumID = "AUDI" + std::to_string(1000 + i);

        std::string auditoriumName = "AUDITORIUM" + std::to_string(i);

        m_auditoriumList[auditoriumID] = new Auditorium(auditoriumID, auditoriumName, "Available");
    }
}

void Auditorium_Manager::bookAuditorium()
{
    std::string id;
    Date *date = new Date;

    std::cout << "Enter Auditorium ID: ";
    std::cin >> id;

    int day, month, year;
    std::cout << "Enter booking date (DD MM YYYY): ";
    std::cin >> day >> month >> year;
    date->setDay(day);
    date->setMonth(month);
    date->setYear(year);


}

void Auditorium_Manager::checkAvailableAuditorium()
{
    Date date;
    int day, month, year;

    std::cout << "Enter date to check (DD MM YYYY): ";
    std::cin >> day >> month >> year;
    date.setDay(day);
    date.setMonth(month);
    date.setYear(year);


}


void Auditorium_Manager::displayAuditorium()
{
    std::cout<<"Display Auditorium Function Called\n"<<std::endl;

    for(const auto& auditorium : m_auditoriumList)
    {
        std::cout << "ID: " << auditorium.first
             << ", Name: " << auditorium.second->getName()
             << ", Status: " << auditorium.second->getStatus() << std::endl;
    }
}

