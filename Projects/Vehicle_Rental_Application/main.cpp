#include "vehiclemanager.h"
#include <iostream>

using namespace std;

int main()
{
    VehicleManager manager;
    manager.addBike();
    manager.addCar();
    manager.displayListOfBikes();
    manager.displayListOfCars();
    std::cout << "Hello World!" << std::endl;
    return 0;
}
