#include "complex.h"
#include <iostream>

Complex::Complex()
{
    std::cout<<"Constructor Called"<<std::endl;
}

Complex::Complex(int real, int imaginary)
{
    std::cout<<"Constructor Paramater Called"<<std::endl;
    this->m_real = real;
    this->m_imaginary = imaginary;
    // std::cout<<"Real :"<<m_real<<std::endl;
    // std::cout<<"Imaginary :"<<m_imaginary<<std::endl;
}

Complex Complex::operator+(const Complex &C2)
{
    std::cout<<"+ Operator"<<std::endl;
    Complex result;
    result.m_real = this->m_real+C2.m_real;
    result.m_imaginary = this->m_imaginary+C2.m_imaginary;
    return result;
}

Complex Complex::operator-(const Complex &C2)
{
    std::cout<<"- Operator"<<std::endl;
    Complex result;
    result.m_real = this->m_real-C2.m_real;
    result.m_imaginary = this->m_imaginary-C2.m_imaginary;
    return result;
}

Complex Complex::operator*(const Complex &C2)
{
    std::cout<<"* Operator"<<std::endl;
    Complex result;
    result.m_real = this->m_real*C2.m_real;
    result.m_imaginary = this->m_imaginary*C2.m_imaginary;
    return result;
}

Complex Complex::operator/(const Complex &C2)
{
    std::cout<<"/ Operator"<<std::endl;
    Complex result;
    result.m_real = this->m_real/C2.m_real;
    result.m_imaginary = this->m_imaginary/C2.m_imaginary;
    return result;
}

Complex Complex::operator>=(const Complex &C2)
{

}

void Complex::printme()
{
    std::cout<<"Real :"<<m_real<<std::endl;
    std::cout<<"Imaginary :"<<m_imaginary<<std::endl;
}

Complex::~Complex()
{
    std::cout<<"Destructor Called"<<std::endl;
}






