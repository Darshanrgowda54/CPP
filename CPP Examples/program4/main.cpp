#include "add.h"
#include <iostream>

using namespace std;

int main()
{
    Add A;
    A.add(10,20);
    A.add(10.10f,30.20f);
    A.add(10.00f,"Darshan");

    cout << "Hello World!" << endl;
    return 0;
}
