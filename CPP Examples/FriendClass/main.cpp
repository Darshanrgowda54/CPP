#include "car.h"
#include "vehical.h"
#include <iostream>

using namespace std;

int main()
{
    Vehical V1("M3",4);
    V1.display();
    Car C1;
    C1.printme(V1);  // friend funnction using
    //C1.display();  // friend Class using
    cout << "Hello World!" << endl;
    return 0;
}
