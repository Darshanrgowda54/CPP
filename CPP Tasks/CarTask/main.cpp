#include "accelerator.h"
#include "break.h"
#include "car.h"
#include "engine.h"
#include "wheel.h"
#include <iostream>

using namespace std;

int main()
{
    Car C;
    Wheel W(&C);
    Accelerator A(&W);
    Break B(&W);
    Engine E;
    cout << "WellCome to BMW" << endl;
    C.carstart();
    A.AcceleratorPress();
    B.breakapplied();
    return 0;
}



