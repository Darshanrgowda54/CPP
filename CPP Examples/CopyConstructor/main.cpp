#include "student.h"
#include <iostream>

using namespace std;

int main()
{
    Student S1;
    S1.a = new int;
    *S1.a = 25;
    Student S2 = S1;
    delete S2.a;
    cout<<(*S1.a)<<endl;
    cout<<("Before Return")<<endl;
    cout << "Hello World!" << endl;
    return 0;
}
