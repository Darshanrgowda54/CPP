#include "whatsapp.h"
#include <iostream>

WhatsAPP::WhatsAPP()
{
    std::cout<<"WhatsAPP Constructor Called"<<std::endl;
}

WhatsAPP::~WhatsAPP()
{
    std::cout<<"WhatsAPP Destructor Called"<<std::endl;
}

void WhatsAPP::appname()
{
    std::cout<<"Application Name is Whatsapp"<<std::endl;
}

void WhatsAPP::appicon()
{
    std::cout<<"Application Icon Whatsapp"<<std::endl;
}

void WhatsAPP::open()
{
    std::cout<<"Application Whatsapp Open"<<std::endl;
}
