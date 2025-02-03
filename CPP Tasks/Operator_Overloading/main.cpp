#include <complex.h>
#include <iostream>

using namespace std;

int main()
{
    Complex C1(10,20);
    Complex C2(20,30);
    Complex C3 = C1 + C2;
    C3.printme();
    Complex C4 = C1 - C2;
    C4.printme();
    Complex C5 = C1 * C2;
    C5.printme();
    Complex C6 = C1 / C2;
    C6.printme();
    Complex C7 = C1 >= C2;
    cout << "Hello World!" << endl;
    return 0;
}


