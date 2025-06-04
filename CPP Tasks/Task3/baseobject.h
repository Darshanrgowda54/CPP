#ifndef BASEOBJECT_H
#define BASEOBJECT_H

#include <string>
#include <vector>
class BaseObject
{
public:
    BaseObject(const std::string name);
    virtual ~BaseObject();

    virtual void addChild(BaseObject* child) = 0;
    virtual void print() = 0;
    std::string getName() const;

    std::vector<BaseObject*> findChild(const std::string name);
    void getMe();

protected:
    std::vector<BaseObject*> m_childList;
    std::string m_name;
};

#endif // BASEOBJECT_H
