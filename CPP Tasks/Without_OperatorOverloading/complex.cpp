#include "complex.h"
#include <iostream>


Complex::Complex()
{
    std::cout<<"Default Constructor Called"<<std::endl;
}

Complex::Complex(int real)
{
    std::cout<<"Constructor Called"<<std::endl;
    this->m_real = real;
    //this->m_imaginary = imaginary;
}

Complex::~Complex()
{
    std::cout<<"Destructor Called"<<std::endl;
}

void Complex::setfunction(int real)
{
    std::cout<<"Setfunction Called"<<std::endl;
    this->m_real = real;
    // this->m_imaginary = imaginary;
}

int Complex::getfunction()
{
    return m_real;
}
