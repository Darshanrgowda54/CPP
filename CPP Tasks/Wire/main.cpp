#include "finolex.h"
#include "havells.h"
#include "polycab.h"
#include "wire.h"
#include <iostream>

using namespace std;

int main()
{
    Wire *p = nullptr;
    delete p;
    p = new Wire;
    delete p;
    p = new Polycab;
    delete p;
    p = new Havells;
    delete p;
    p = new Finolex;
    delete p;

    cout << "Hello World!" << endl;
    return 0;
}
