#include "phone.h"
#include <iostream>

Phone::Phone(int dialpad):m_dialpad(dialpad)
{
    std::cout<<"Constructor Phone Called"<<std::endl;
    std::cout<<"DialPad :"<<m_dialpad<<std::endl;

}

Phone::~Phone()
{
    std::cout<<"Destructor Phone Called"<<std::endl;
}

void Phone::makecall()
{
    std::cout<<"Call Done"<<std::endl;
}

void Phone::display()
{
    std::cout<<"Call Done Display"<<std::endl;
}
