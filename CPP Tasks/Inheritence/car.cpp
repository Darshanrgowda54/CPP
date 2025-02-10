#include "car.h"
#include <iostream>


Car::Car(int publiccar, int privatecar, int protectedcar) : m_privatecar(privatecar),m_publiccar(publiccar),m_protectedcar(protectedcar)
{
    std::cout<<m_publiccar<<std::endl;
    std::cout<<"Constructor Car"<<std::endl;
    m_publiccar = 40;
    // m_publiccar = publiccar;
    // m_privatecar = privatecar;
    // m_protectedcar = protectedcar;
    std::cout<<m_publiccar<<std::endl;
    std::cout<<m_privatecar<<std::endl;
    std::cout<<m_protectedcar<<std::endl;
}

Car::~Car()
{
    std::cout<<"Destructor Car"<<std::endl;
}

