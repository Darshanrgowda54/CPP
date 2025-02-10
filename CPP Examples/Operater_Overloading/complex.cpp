#include "complex.h"
#include <iostream>


Complex::Complex()
{
    std::cout<<"Constructor Called"<<std::endl;
}

Complex::Complex(int real, int image)
{
    std::cout<<"Constructor  Parameters Called"<<std::endl;
    m_real = real;
    m_image = image;
}

// Complex Complex::operator +(const Complex &C2)
// {
//     Complex result;
//     result.m_real = m_real+C2.m_real;
//     result.m_image = m_image+C2.m_image;
//     return result;
// }

Complex Complex::operator =(const Complex &C1)
{
    std::cout<<"operator"<<std::endl;
    Complex result1;
    m_real = C1.m_real;
    m_image = C1.m_image;
    result1.m_real = C1.m_image;
    return result1;
}

void Complex::printme()
{
    //std::cout<<m_real<<"+ i"<<m_image<<std::endl;
    std::cout<<"printme"<<std::endl;
    std::cout<<m_real<<std::endl;
    std::cout<<m_image<<std::endl;
}


Complex::~Complex()
{
    std::cout<<"Destructor Called"<<std::endl;
}
