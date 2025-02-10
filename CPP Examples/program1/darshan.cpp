#include "darshan.h"
#include <iostream>

Darshan::Darshan(){}

void Darshan::add(int a, int b)
{
    int sum = a+b;
    std::cout << sum <<"\n";
}

void Darshan::sub()
{
    int a = 10;
    int b = 20;
    int sum = (a-b);
    std::cout << sum <<"\n";
}


