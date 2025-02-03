#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
    int m_real;
    int m_imaginary;
public:
    Complex();
    Complex(int real,int imaginary);
    Complex operator+(const Complex &C2);
    Complex operator-(const Complex &C2);
    Complex operator*(const Complex &C2);
    Complex operator/(const Complex &C2);
    Complex operator>=(const Complex &C2);
    void printme();
    ~Complex();
};

#endif // COMPLEX_H
