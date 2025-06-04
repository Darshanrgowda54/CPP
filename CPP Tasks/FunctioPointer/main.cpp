#include "base.h"

using namespace std;

int main()
{
    Base base;
    base.print();
    base.funPtr = &Base::print;
    (base.*base.funPtr)();

    return 0;
}
