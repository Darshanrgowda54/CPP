#include "librarian.h"
#include "library.h"
#include <iostream>

using namespace std;

int main()
{

    Librarian* librarian = new Librarian("ghjghj","LIB001");
    Library* library = new Library;
    library->setLibrarian(librarian);
    //librarian->setLibrary(library);

    librarian->addStudent();
    librarian->displayStudents();

    library->addBook();
    //librarian->displayBooks();

    delete librarian;
    delete library;

    cout << "Hello World!" << endl;
    return 0;
}
