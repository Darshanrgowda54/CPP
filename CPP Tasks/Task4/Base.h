#ifndef BASE_H
#define BASE_H

#include <vector>
class Derived;
class Base
{
public:
    Base();
    ~Base();

    void add(Derived* d);
    void show();
private:
    std::vector<Derived*> m_derived;
};

#endif // BASE_H
