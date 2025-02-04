#include "rbi.h"
#include "sbi.h"
#include <iostream>

using namespace std;

int main()
{
    RBI *bptr;
    //RBI rbi;
    SBI sbi;
    sbi.amount(100);
    bptr =&sbi;
    bptr->amount(1000);
    //bptr->RBI::amount(2000);
    // bptr =&rbi;
    // bptr->amount(5000);
    cout << "Hello World!" << endl;
    return 0;
}
