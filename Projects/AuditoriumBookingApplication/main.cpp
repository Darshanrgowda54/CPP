#include "auditorium_manager.h"
#include <iostream>

using namespace std;

enum
{
    ADDAUDITORIUM = 1,
    BOOKAUDITORIUM,
    DISPLAYAUDITORIUM,
    CHECKAVAILABLEAUDITORIUM,
    EXIT
};

int main()
{
    Auditorium_Manager* manager = new Auditorium_Manager;
    int choice;

    while(true)
    {
        std::cout<<"\nAuditorium Application "<<std::endl;
        std::cout<<" 1. Add Auditorium "<<std::endl;
        std::cout<<" 2. Book Auditorium "<<std::endl;
        std::cout<<" 3. Display Auditorium "<<std::endl;
        std::cout<<" 4. Check Available Auditorium"<<std::endl;
        std::cout<<" 5. Exit Application"<<std::endl;
        std::cout<<" Enter Your Choice: ";
        std::cin>>choice;

        switch (choice)
        {
        case ADDAUDITORIUM:
            manager->addAuditorium();
            break;
        case BOOKAUDITORIUM:
            manager->bookAuditorium();
            break;
        case DISPLAYAUDITORIUM:
            manager->displayAuditorium();
            break;
        case CHECKAVAILABLEAUDITORIUM:
            manager->checkAvailableAuditorium();
            break;
        case EXIT:
            std::cout<<"Exiting"<<std::endl;
            delete manager;
            return 0;
        default:
            std::cout<<"Invalid Choice"<<std::endl;
            break;
        }
    }
    return 0;
}


