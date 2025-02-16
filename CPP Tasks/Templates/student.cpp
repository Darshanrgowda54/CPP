#include "student.h"
#include <iostream>

template <typename A>
Student<A>::Student()
{
    std::cout<<"Constructor Called"<<std::endl;
}

template <typename A>
Student<A>::~Student()
{
    std::cout<<"Destructor Called"<<std::endl;
}


template <typename A>
A Student<A>::add(A a,A b)
{
    A sum = a-b;
    return sum;
}
//template int Student::add<int>(int,int);
template class Student<int>;
