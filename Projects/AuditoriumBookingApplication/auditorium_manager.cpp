#include "auditorium_manager.h"
#include "date.h"
#include <iostream>
#include <algorithm>

Auditorium_Manager::Auditorium_Manager()
{
    std::cout << "Auditorium Manager Constructor Called" << std::endl;

    this->m_date = new Date;
}

Auditorium_Manager::~Auditorium_Manager()
{
    for (const auto& auditorium : m_auditoriumList)
    {
        delete auditorium.second;
    }
    m_auditoriumList.clear();
    delete m_date;
    std::cout << "Auditorium Manager Destructor Called" << std::endl;
}

void Auditorium_Manager::addAuditorium()
{
    std::cout << "Add Auditorium Function Called" << std::endl;

    for (int i = 1; i <= 10; i++)
    {
        std::string auditoriumID = "AUDI" + std::to_string(1000 + i);
        std::string auditoriumName = "AUDITORIUM" + std::to_string(i);

        m_auditoriumList[auditoriumID] = new Auditorium(auditoriumID, auditoriumName, "Available");
    }
}

void Auditorium_Manager::bookAuditorium()
{
    std::string id;
    std::cout << "Enter Auditorium ID: ";
    std::cin >> id;

    int day, month, year;
    std::cout << "Enter booking date (DD-MM-YYYY): ";
    std::cin >> day >> month >> year;

    m_date->setDay(day);
    m_date->setMonth(month);
    m_date->setYear(year);

    if (m_auditoriumList.find(id) == m_auditoriumList.end())
    {
        std::cout << "Auditorium Not Found" << std::endl;
        return;
    }

    auto& bookedList = m_bookingDatelist[*m_date];
    if (std::find(bookedList.begin(), bookedList.end(), id) != bookedList.end())
    {
        std::cout << "Auditorium is already booked for selected date" << std::endl;
        return;
    }

    Date currentDate = m_date->getCurrentDate();
    if (m_date->getYear() < currentDate.getYear() ||
        (m_date->getYear() == currentDate.getYear() && m_date->getMonth() < currentDate.getMonth()) ||
        (m_date->getYear() == currentDate.getYear() && m_date->getMonth() == currentDate.getMonth() && m_date->getDay() < currentDate.getDay()))
    {
        std::cout << "Please enter a future date" << std::endl;
        return;
    }

    m_bookingDatelist[*m_date].push_back(id);
    std::cout << m_auditoriumList[id]->getName() << " booked successfully for "
              << day << "-" << month << "-" << year << std::endl;
}


void Auditorium_Manager::checkAvailableAuditorium()
{
    int day, month, year;

    std::cout << "Enter date to check (DD-MM-YYYY): ";
    std::cin >> day >> month >> year;
    m_date->setDay(day);
    m_date->setMonth(month);
    m_date->setYear(year);

    std::cout << "\nAvailable Auditoriums on Date: " << day << "-" << month << "-" << year << std::endl;
    for (const auto& auditorium : m_auditoriumList)
    {
        if (std::find(m_bookingDatelist[*m_date].begin(), m_bookingDatelist[*m_date].end(), auditorium.first) == m_bookingDatelist[*m_date].end())
        {
            std::cout << "ID: " << auditorium.first << ", Name: " << auditorium.second->getName() << std::endl;
        }
    }

    std::cout << "\nBooked Auditoriums on Date: " << day << "-" << month << "-" << year << std::endl;
    for (const auto& auditoriumID : m_bookingDatelist[*m_date])
    {
        std::cout << "ID: " << auditoriumID << ", Name: " << m_auditoriumList[auditoriumID]->getName() << std::endl;
    }
}

void Auditorium_Manager::displayAuditorium()
{
    std::cout << "Display Auditorium Function Called\n" << std::endl;

    for (const auto& auditorium : m_auditoriumList)
    {
        std::cout << "ID: " << auditorium.first
                  << ", Name: " << auditorium.second->getName()
                  << ", Status: " << auditorium.second->getStatus() << std::endl;
    }
}

int Auditorium_Manager::getBookedCount(Date& date)
{
    return m_bookingDatelist[date].size();
}

int Auditorium_Manager::getAvailableCount(Date& date)
{
    int bookedCount = getBookedCount(date);
    return m_auditoriumList.size() - bookedCount;
}

const std::map<Date, std::vector<auditoriumID>>& Auditorium_Manager::getBookingDateList() const {
    return m_bookingDatelist;
}
