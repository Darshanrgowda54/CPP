#include "derived.h"
#include <iostream>

using namespace std;

int main()
{
    //Base b;
    //b.printme();
    //b.show();

    Derived d;
    d.printme();
    d.show();

    // Base* b = new Derived;
    // b->printme();
    // b->show();
    // delete b;

    cout << "Hello World!" << endl;
    return 0;
}
