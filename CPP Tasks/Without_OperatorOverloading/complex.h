#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
    int m_real;
    int m_imaginary;
public:
    Complex();
    Complex(int real);
    ~Complex();
    void setfunction(int real);
    int getfunction();
};

#endif // COMPLEX_H
