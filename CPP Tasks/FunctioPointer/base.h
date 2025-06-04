#ifndef BASE_H
#define BASE_H

class Base
{
public:
    Base();
    ~Base();

    void print();
    void (Base::*funPtr)();
};

#endif // BASE_H
