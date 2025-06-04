#include "Office.h"
#include <iostream>

Office::Office(const std::string name):BaseObject(name)
{
    std::cout<<"Office Constructor Called"<<std::endl;
}

Office::~Office()
{
    std::cout<<"Office Destructor Called"<<std::endl;
}

void Office::addChild(BaseObject* child)
{
    std::cout<<"AddChild Office Function Called"<<std::endl;
    m_childList.push_back(child);
}

void Office::print()
{
    std::cout<<"Print Office Function Called"<<std::endl;

    std::cout << "Office Name: " << m_name << std::endl;
    for (auto empchild : m_childList)
    {
        empchild->print();
    }
}

