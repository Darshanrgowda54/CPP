#include "car.h"

using namespace std;

int main()
{
    Car c1(10);  // shallow Copy
    c1.print();

    Car c2 = c1;
    c2.print();
    return 0;
}
