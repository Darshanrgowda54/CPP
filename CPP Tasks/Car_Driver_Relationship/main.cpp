#include "owner.h"
#include "driver.h"
#include <iostream>

using namespace std;

int main()
{
    Owner* owner = new Owner();
    Driver* driver = new Driver;

    driver->setName("Spider");
    owner->assignDriver(driver);

    delete driver;
    delete owner;
    cout << "Hello World!" << endl;
    return 0;
}
