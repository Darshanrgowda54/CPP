#include "baseobject.h"
#include <iostream>

BaseObject::BaseObject(const std::string name):m_name(name)
{
    std::cout<<"Baseobject Constructor Called"<<std::endl;
}

BaseObject::~BaseObject()
{
    std::cout<<"Baseobject Destructor Called"<<std::endl;
}

std::string BaseObject::getName() const
{
    return m_name;
}

std::vector<BaseObject*> BaseObject::findChild(const std::string name) {
    std::vector<BaseObject*> result;
    if (this->getName() == name) {
        result = this->m_childList;
    }
    else
    {
        for (auto child : m_childList) {
            result = child->findChild(name);
            if (!result.empty()) {
                break;
            }
        }
    }
    return result;
}


void BaseObject::getMe()
{

}
