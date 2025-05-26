#include "Base.h"
#include "Derived.h"
#include <iostream>

Base::Base()
{
    std::cout<<"Base Constructor"<<std::endl;
}

Base::~Base()
{
    std::cout<<"Base Destructor"<<std::endl;
}

void Base::add(Derived *d)
{
    m_derived.push_back(d);
}

void Base::show()
{
    for(Derived* d : m_derived)
    {
        d->show();
    }
}
