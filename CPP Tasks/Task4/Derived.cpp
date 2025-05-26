#include "Derived.h"
#include "Base.h"
#include <iostream>

Derived::Derived(int number, Base *b) {
    std::cout<<"Derived Parameter Constructor"<<std::endl;
    this->m_number = number;
    b->add(this);
}

Derived::Derived(int number, Derived *d)
{
    this->m_number = number;
}

Derived::~Derived()
{
    std::cout<<"Derived Destructor"<<std::endl;
}

void Derived::show()
{
    std::cout<<m_number<<std::endl;
}
