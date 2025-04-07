#include <iostream>

using namespace std;

class A
{
public:
    A()
    {
        cout<<"A constructor called"<<endl;
    }
    virtual ~A()
    {
        cout<<"A destructor called"<<endl;
    }
    void function()
    {
        cout<<"A Function called"<<endl;
    }
};


class B:public  A
{
protected:
    B()
    {
        cout<<"B constructor called"<<endl;
    }
    ~B()
    {
        cout<<"B destructor called"<<endl;
    }
    virtual void function()
    {
        cout<<"B Function called"<<endl;
    }
protected:
};


class C:public B
{
public:
    C()
    {
        cout<<"C constructor called"<<endl;
    }
    ~C()
    {
        cout<<"C destructor called"<<endl;
    }
    void function()
    {
        cout<<"C Function called"<<endl;
    }
};


int main()
{
    cout << "Hello World!" << endl;
    A* ptr = new C();
    ptr->function();
    delete ptr;
    return 0;
}
