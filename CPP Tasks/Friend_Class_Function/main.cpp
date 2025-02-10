#include "car.h"
#include "vehical.h"
#include <iostream>

using namespace std;

int main()
{
    Vehical V1("Benz",6);
    Car C1("Benz",6);
    C1.display();
    //C1.printme(V1);
    cout << "Hello World!" << endl;
    return 0;
}
