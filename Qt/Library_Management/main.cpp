#include "library.h"
#include <iostream>

using namespace std;

int main()
{

    Librarian* librarian = new Librarian("King Kong","LIB001");
    Library* library = new Library;
    library->setLibrarian(librarian);

    librarian->addStudent();
    library->addBook();
    int choice;

    while (true)
    {
        std::cout<<" 1. Request Book"<<std::endl;
        std::cout<<" 2. Display Book"<<std::endl;
        std::cout<<" 3. Exit"<<std::endl;
        std::cout<<" Enter Your Choice: ";
        std::cin>> choice;

        switch (choice)
        {
        case 1:
            librarian->requestBook();
            break;
        case 2:
            librarian->displayBooks();
            break;
        case 3:
            std::cout<<"Exit Bye"<<std::endl;
            return 0;
        default:
            std::cout<<"Enter Invalid Choice"<<std::endl;
            break;
        }
    }
    return 0;
    delete librarian;
    delete library;
}
