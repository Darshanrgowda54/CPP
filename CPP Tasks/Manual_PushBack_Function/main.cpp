#include "array.h"
#include <iostream>

using namespace std;

int main()
{
    Array<int> arr;
    Array<float> arr1;
    Array<double> arr2;

    arr.pushback(10);
    arr1.pushback(20);
    arr2.pushback(30);

    arr.print();
    arr1.print();
    arr2.print();

    cout << "Hello World!" << endl;
    return 0;
}



