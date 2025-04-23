#include "auditorium_manager.h"
#include "date.h"
#include <iostream>
#include <algorithm>

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
    Date date;

    std::cout << date.getDay() << date.getMonth() << date.getYear();

    int days = date.getDay();
    int months = date.getMonth();
    int years = date.getYear();

    std::cout << "Enter Auditorium ID: ";
    std::cin >> id;

    int day, month, year;
    std::cout << "Enter booking date (DD-MM-YYYY): ";
    std::cin >> day >> month >> year;
    date.setDay(day);
    date.setMonth(month);
    date.setYear(year);


    if(m_auditoriumList.find(id) == m_auditoriumList.end())
    {
        std::cout << "Auditorium Not Found" << std::endl;
        return;
    }

    auto& bookedList = m_bookingsByDate[date];
    if(std::find(bookedList.begin(), bookedList.end(), id) != bookedList.end())
    {
        std::cout << "Auditorium is already booked for selected date" << std::endl;
        return;
    }

    if(years <= year )
    {
        if(months <= month)
        {
            if(days <= day)
            {
                m_bookingsByDate[date].push_back(id);
                std::cout << m_auditoriumList[id]->getName()<< " Booked Successfully for "<< day << month << year << std::endl;
            }
            else
            {
                std::cout<<"Please enter future date"<<std::endl;
            }
        }
        std::cout<<"Plese Enter Future Month"<<std::endl;
    }
}

void Auditorium_Manager::checkAvailableAuditorium()
{
    Date date;
    int day, month, year;

    std::cout << "Enter date to check (DD-MM-YYYY): ";
    std::cin >> day >> month >> year;
    date.setDay(day);
    date.setMonth(month);
    date.setYear(year);

    std::cout << "\nAvailable Auditoriums on Date: " << day<< month<< year <<std::endl;
    for(auto auditorium = m_auditoriumList.begin();auditorium != m_auditoriumList.end();auditorium++)
    {
        if(std::find(m_bookingsByDate[date].begin(), m_bookingsByDate[date].end(), auditorium->first) == m_bookingsByDate[date].end())
        {
            std::cout << "ID: " << auditorium->first<< ", Name: " << auditorium->second->getName()<< std::endl;
        }
    }

    std::cout << "\nBooked Auditoriums on Date: " << day << month << year << std::endl;
    for(const auto& auditoriumID : m_bookingsByDate[date])
    {
        std::cout << "ID: " << auditoriumID<< ", Name: " << m_auditoriumList[auditoriumID]->getName()<< std::endl;
    }
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

