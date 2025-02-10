#include <iostream>

using namespace std;

int maths(int a);

int main()
{
    int a = 10;
    int x = 0;
    cout <<a<< endl;
    cout <<x<< endl;
    x = maths(a);
    cout<<a<<endl;
    cout<<x<<"**"<<endl;
    return 0;
}

int maths(int a)
{
    cout<<a<<"*"<<endl;
    int x = a *2;
    cout<<x<<"*"<<endl;
    return x;
}

