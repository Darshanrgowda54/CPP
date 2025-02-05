#include <complex.h>
#include <iostream>

using namespace std;

int main()
{
    Complex C1(1,2);
    Complex C2(2,4);
    Complex C3 = C1.add(C2);
    C3.display();
    cout << "Hello World!" << endl;
    return 0;
}
