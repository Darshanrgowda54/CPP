#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
private:
    int m_real;
    int m_imaginary;
public:
    Complex();
    Complex(int real,int imaginary);
    Complex add(const Complex &C2);
    void display();
    ~Complex();
};

#endif // COMPLEX_H
