#include "bmw.h"
#include <iostream>

BMW::BMW(int publiccar, int privatecar, int protectedcar):Car(publiccar,privatecar,protectedcar)
{
    std::cout<<"Constroctor BMW"<<std::endl;
    // m_privatebmw = 2;
    // m_protectedbmw = 2;
    // m_publicbmw = 2;
    // m_publiccar = 1;
    // m_protectedcar = 1;
    //m_privatecar = 1;
}

BMW::~BMW()
{
    std::cout<<"Destroctor BMW"<<std::endl;
}
