#ifndef BASE_H
#define BASE_H

class Base
{
public:
    Base();
    virtual ~Base();

    virtual void printme();
    virtual void show() = 0;
};

#endif // BASE_H
