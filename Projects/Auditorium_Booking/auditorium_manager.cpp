#include "auditorium_manager.h"
#include <iomanip>
#include <iostream>

Auditorium_Manager::Auditorium_Manager()
{
    std::cout<<"Auditorium Manager Constructor Called"<<std::endl;
    m_calendar = new Calendar();
}

Auditorium_Manager::~Auditorium_Manager()
{
    for(auto auditorium : m_auditoriumList)
    {
        delete auditorium;
    }
    delete m_calendar;

    std::cout<<"Auditorium Manager Destructor Called"<<std::endl;
}

void Auditorium_Manager::addAuditorium()
{
    std::cout<<"Add Auditorium Function Called"<<std::endl;

    m_auditoriumList.push_back(new Auditorium("AUDITORIUM1", "Available"));
    m_auditoriumList.push_back(new Auditorium("AUDITORIUM2", "Available"));
    m_auditoriumList.push_back(new Auditorium("AUDITORIUM3", "Available"));
    m_auditoriumList.push_back(new Auditorium("AUDITORIUM4", "Available"));
    m_auditoriumList.push_back(new Auditorium("AUDITORIUM5", "Available"));
    m_auditoriumList.push_back(new Auditorium("AUDITORIUM6", "Available"));
    m_auditoriumList.push_back(new Auditorium("AUDITORIUM7", "Available"));
    m_auditoriumList.push_back(new Auditorium("AUDITORIUM8", "Available"));
    m_auditoriumList.push_back(new Auditorium("AUDITORIUM9", "Available"));
    m_auditoriumList.push_back(new Auditorium("AUDITORIUM10", "Available"));
}

void Auditorium_Manager::displayAuditorium()
{
    std::cout<<"Display Auditorium Function Called"<<std::endl;

    std::cout<<std::setw(15)<<"\nAuditorium Name"<<std::setw(30)<<"Auditorium Status"<<std::endl;
    std::cout<<"----------------------------------------------"<<std::endl;
    for(auto auditorium : m_auditoriumList)
    {
        std::cout<<std::setw(15)<<auditorium->getName()<<std::setw(30)<<auditorium->getStatus()<<std::endl;
    }
}

void Auditorium_Manager::bookAuditorium()
{
    std::cout<<"Book Auditorium Function Called"<<std::endl;

    std::string name;
    int day,month,year;

    std::cout<<"Enter Auditorium Name: ";
    std::cin>>name;
    std::cout<<"Enter Booking Date: ";
    std::cin>>day;
    std::cout<<"Enter month: ";
    std::cin>>month;
    std::cout<<"Enter year: ";
    std::cin>>year;

    if(day < 1 || day > 30)
    {
        std::cout<<"Invalid date"<<std::endl;
        return;
    }

    for(auto auditorium : m_auditoriumList)
    {
        if(auditorium->getName() == name)
        {
            if(auditorium->getStatus() == "Available")
            {
                auditorium->setStatus("Booked");
                auditorium->setBookDate(day, month, year);

                m_calendar->setDay(day);
                m_calendar->setMonth(month);
                m_calendar->setYear(year);
                std::cout << "Successfully booked Auditorium " << auditorium->getName() << " for " << day<<"/"<< month<<"/"<<year<<std::endl;
            }
            else
            {
                std::cout<<auditorium->getName()<<" is already booked "
                          <<auditorium->getBookDate().day<<"/"
                          <<auditorium->getBookDate().month<<"/"
                          <<auditorium->getBookDate().year<<std::endl;
            }
            return;
        }
    }
    std::cout<<"Auditorium not found"<<std::endl;
}

void Auditorium_Manager::bookedStatus()
{
    std::cout<<"Booked Status Function Called"<<std::endl;
    std::cout<<"\nAuditorium Name"<<std::setw(20)<<"Booked Date"<<std::endl;
    std::cout<<"--------------------------------------------"<<std::endl;
    for(auto auditorium : m_auditoriumList)
    {
        if(auditorium->getStatus() == "Booked")
        {
            std::cout<<auditorium->getName()<<std::setw(20)
            <<auditorium->getBookDate().day<<"/"
            <<auditorium->getBookDate().month<<"/"
            <<auditorium->getBookDate().year<<std::endl;
        }
    }
}


void Auditorium_Manager::availableAuditorium()
{
    std::cout<<"Display Available Auditorium Function Called"<<std::endl;

    std::cout<<std::setw(15)<<"\nAuditorium Name"<<std::endl;
    std::cout<<"---------------"<<std::endl;
    for(auto auditorium : m_auditoriumList)
    {
        if(auditorium->getStatus() == "Available")
        {
            std::cout<<auditorium->getName()<<std::endl;
        }
    }
}
