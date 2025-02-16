#include "car.h"
#include "iostream"

template <typename A,typename B,typename C>
Car<A,B,C>::Car()
{
    std::cout<<"Constructor Called"<<std::endl;
}

template <typename A,typename B,typename C>
Car<A,B,C>::~Car()
{
    std::cout<<"Destructor Called"<<std::endl;
}

template <typename A,typename B,typename C>
int Car<A,B,C>::add(A a,B b,C c)
{
    C sum = a + b-c;
    return sum;
}
template class Car<int,int,int>;
