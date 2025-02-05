#include "complex.h"
#include <iostream>

Complex::Complex(int real, int imaginary):m_real(real),m_imaginary(imaginary)
{
    std::cout<<" ****** Constructor Called"<<std::endl;
    std::cout<<"Real :"<<m_real<<std::endl;
    std::cout<<"Imaginary :"<<m_imaginary<<std::endl;
}


Complex Complex::add(const Complex &C2)
{
    Complex result;
    result.m_real = this->m_real+C2.m_real;
    result.m_imaginary = this->m_imaginary+C2.m_imaginary;
    return result;
}

void Complex::display()
{
    std::cout << m_real << " + " << m_imaginary << std::endl;
}


Complex::~Complex()
{
    std::cout<<"Destructor Called"<<std::endl;
}



Complex::Complex()
{
    std::cout<<"Constructor Called"<<std::endl;
}

