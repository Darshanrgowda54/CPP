#include "prathik.h"
#include "darshan.h"
#include <iostream>

Prathik::Prathik()
{
    std::cout<<"Prathik Constructor Called"<<std::endl;
}

Prathik::~Prathik()
{
    std::cout<<"Prathik Destructor Called"<<std::endl;
}

void Prathik::pushback(Darshan d)
{
    //std::cout<<&d<<std::endl;
    std::cout<<"Push Back Function Called"<<std::endl;
    darshanObj.push_back(d);
}
