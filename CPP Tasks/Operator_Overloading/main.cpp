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

    if(C1 >= C2)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }

    if(C2 <= C1)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }

    if(C1 == C2)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }

    cout << "Hello World!" << endl;
    return 0;
}


