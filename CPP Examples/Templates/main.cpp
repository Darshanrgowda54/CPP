#include "car.h"
#include <iostream>

using namespace std;
// template<typename Templates>

// Templates add(Templates a,Templates b)
// {
//     Templates sum = a+b;
//     return sum;
// }

int main()
{

    // double c = add<double>(1.123,2.234);
    // cout<<c<<endl;
    Car<int> C1;
    cout<<C1.add(10,20)<<endl;
    //cout<<C1.add<int>(10,20)<<endl;
    cout << "Hello World!" << endl;
    return 0;
}
