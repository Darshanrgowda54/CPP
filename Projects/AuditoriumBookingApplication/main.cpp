#include "auditorium_manager.h"
#include "calendar.h"
#include <iostream>

using namespace std;

enum
{
    ADDAUDITORIUM = 1,
    DISPLAYAUDITORIUM,
    BOOKAUDITORIUM,
    CHECKAVAILABLEAUDITORIUM,
    EXIT,
};


int main()
{
    Auditorium_Manager* manager = new Auditorium_Manager;
    manager->addAuditorium();

    Calendar* calendar = new Calendar;
    calendar->setBookingManager(manager);
    calendar->changeMonths();
    int choice;

    while(true)
    {
        std::cout<<"\nAuditorium Booking Application "<<std::endl;
        std::cout<<" 1. Add Auditorium "<<std::endl;
        std::cout<<" 2. Display Auditorium "<<std::endl;
        std::cout<<" 3. Book Auditorium "<<std::endl;
        std::cout<<" 4. Check Available Auditorium "<<std::endl;
        std::cout<<" 5. Exit Application "<<std::endl;
        std::cout<<" Enter Your Choice: ";
        std::cin>>choice;

        switch (choice)
        {
        // case ADDAUDITORIUM:
        //     manager->addAuditorium();
        //     break;
        case DISPLAYAUDITORIUM:
            manager->displayAuditorium();
            break;
        case BOOKAUDITORIUM:
            manager->bookAuditorium();
            break;
        case CHECKAVAILABLEAUDITORIUM:
            manager->checkAvailableAuditorium();
            break;
        case EXIT:
            std::cout<<"Exiting"<<std::endl;
            delete manager;
            delete calendar;
            return 0;
        default:
            std::cout<<"Invalid Choice"<<std::endl;
            break;
        }
    }
    return 0;
}


