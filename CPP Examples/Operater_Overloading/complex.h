#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
    int m_real;
    int m_image;
public:
    Complex();
    Complex(int real,int image);
    //Complex operator +(const Complex & C2);
    Complex operator =(const Complex & C1);
    void printme();
    ~Complex();
};

#endif // COMPLEX_H
