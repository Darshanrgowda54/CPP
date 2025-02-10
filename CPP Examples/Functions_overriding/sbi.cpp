#include "sbi.h"
#include <iostream>

SBI::SBI()
{
    std::cout<<"SBI Constructor Called"<<std::endl;
}

SBI::~SBI()
{
    std::cout<<"SBI Destructor Called"<<std::endl;
}

void SBI::amount(int insurance)
{
    std::cout<<"SBI Function Called"<<std::endl;
    this->m_insurance = insurance;
    std::cout<<"SBI Insurance Amount :"<<m_insurance<<std::endl;
}

