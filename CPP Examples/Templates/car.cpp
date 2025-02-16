#include "car.h"
#include <iostream>

template<typename T>
Car<T>::Car()
{
    std::cout<<"Constructor Called"<<std::endl;
}

template<typename T>
Car<T>::~Car()
{
    std::cout<<"Destructor Called"<<std::endl;
}


template<typename T>
T Car<T>::add(T a, T b)
{
    std::cout<<"A :"<<a<<std::endl;
    T sum = a+b;
    return sum;
}
//template int Car::add<int>(int,int);
template class Car<int>;
