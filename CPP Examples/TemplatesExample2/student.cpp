#include "student.h"
#include <iostream>

template <typename A,typename B>
Student<A,B>::Student()
{
    std::cout<<"Constructor Called"<<std::endl;
}

template <typename A,typename B>
Student<A,B>::~Student()
{
    std::cout<<"Destructor Called"<<std::endl;
}


template<typename A, typename B>
void Student<A, B>::addStudent(A name, B age)
{
    m_name = name;
    m_age = age;
    std::cout<<"Name :"<<m_name<<std::endl;
    std::cout<<"Age :"<<m_age<<std::endl;
}
template class Student<std::string,int>;
