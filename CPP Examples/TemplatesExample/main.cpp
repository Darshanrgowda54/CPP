#include "car.h"
#include <iostream>

using namespace std;

int main()
{
    Car<int,int,int> C1;

    cout <<C1.add(10,10,10)<< endl;
    return 0;
}
