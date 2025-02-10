#include <complex.h>
#include <iostream>

using namespace std;

int main()
{
    Complex C1(0);
    Complex C2(0);

    cout<<C1.getfunction()<<endl;
    cout<<C2.getfunction()<<endl;

    C1.setfunction(10);
    cout<<C1.getfunction()<<endl;
    C2.setfunction(20);
    cout<<C2.getfunction()<<endl;

    Complex C3 = C1.getfunction()+C2.getfunction();
    cout<<C3.getfunction()<<endl;

    cout << "Hello World!" << endl;
    return 0;
}
