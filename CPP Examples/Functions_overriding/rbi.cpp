#include "rbi.h"
#include <iostream>

RBI::RBI()
{
    std::cout<<"RBI Constructor Called"<<std::endl;
}

RBI::~RBI()
{
    std::cout<<"RBI Destructor Called"<<std::endl;
}

void RBI::amount(int insurance)
{
    std::cout<<"SBI function Called"<<std::endl;
    this->m_insurance = insurance;
    std::cout<<"RBI Insurance Amount :"<<m_insurance<<std::endl;
}
