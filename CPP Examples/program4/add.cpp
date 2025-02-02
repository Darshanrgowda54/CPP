#include "add.h"
#include <iostream>

Add::Add(){}

void Add::add(int a,int b)
{
    int sum;
    sum = a+b;
    std::cout<<sum<<std::endl;
}

void Add::add(float a, float b)
{
    int result;
    result = a +b;
    std::cout<<result<<std::endl;
}

void Add::add(int a, std::string name)
{
    std::cout<<a<<name<<std::endl;
}
