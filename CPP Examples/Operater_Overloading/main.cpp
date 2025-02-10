#include <complex.h>
#include <iostream>

using namespace std;

int main()
{
    Complex C1(1,2),C2(2,4);
    //Complex C3 = (C1=C2);
    Complex C4;
    C4 = C1;
    C4.printme();
    cout << "Hello World!" << endl;
    return 0;
}
