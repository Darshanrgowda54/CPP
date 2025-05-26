#include "Base.h"
#include "Derived.h"

using namespace std;

int main()
{
    Base b;
    Derived d1(10,&b);
    Derived d2(11,&b);
    Derived d3(12,&b);
    Derived d4(13,&b);
    Derived d5(14,&b);
    Derived d6(20,&d1);

    b.show();
    return 0;
}
