#include "student.h"
#include <iostream>

template<typename A,typename B>
Student<A,B>::Student()
{
    std::cout<<"Student Constructor Called"<<std::endl;
}

template<typename A,typename B>
Student<A,B>::~Student()
{
    std::cout<<"Student Destructor Called"<<std::endl;
}

template<typename A,typename B>
A Student<A,B>::add(A maths, B science)
{
    std::cout<<"Add Function Called"<<std::endl;
    return maths+science;
}
template class Student<int,int>;

