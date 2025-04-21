#include "auditorium_manager.h"
#include "calendar.h"
#include <iostream>

using namespace std;

enum
{
    DISPLAYAUDITORIUM = 1,
    BOOKAUDITORIUM,
    STATUS,
    AVAILABLEAUDITORIUM,
    EXIT
};

int main()
{

    Auditorium_Manager* manager = new Auditorium_Manager;
    manager->addAuditorium();

    Calendar c;
    c.displayCalendar();

    int choice;

    while(true)
    {
        std::cout<<std::endl;
        std::cout<<"\n 1. Display Auditorium "<<std::endl;
        std::cout<<" 2. Book Auditorium "<<std::endl;
        std::cout<<" 3. Status "<<std::endl;
        std::cout<<" 4. Available Auditorium"<<std::endl;
        std::cout<<" 5. Exit "<<std::endl;
        std::cout<<" Enter Your Choice: ";
        std::cin>>choice;

        switch (choice)
        {
        case DISPLAYAUDITORIUM:
            manager->displayAuditorium();
            break;
        case BOOKAUDITORIUM:
            manager->bookAuditorium();
            break;
        case STATUS:
            manager->bookedStatus();
            break;
        case AVAILABLEAUDITORIUM:
            manager->availableAuditorium();
            break;
        case EXIT:
            std::cout<<" Exit "<<std::endl;
            return 0;
        default:
            std::cout<<"Invalid Choice"<<std::endl;
            break;
        }
    }
    delete manager;
    return 0;
}








