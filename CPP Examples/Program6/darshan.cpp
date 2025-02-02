#include "darshan.h"
#include <iostream>

Darshan::Darshan()
{
    m_eye =2;
    m_nose =1;
    m_hand =2;
    std::cout<<"Deafult"<<std::endl;
}


Darshan::Darshan(int eye,int nose ,int hand)
{
    m_eye =eye;
    m_nose =nose;
    m_hand =hand;

    std::cout<<"Eyes :"<<m_eye<<std::endl;
    std::cout<<"Nose :"<<m_nose<<std::endl;
    std::cout<<"Hand :"<<m_hand<<std::endl;
}
