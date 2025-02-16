#include "student.h"
#include <iostream>

using namespace std;

// int main()
// {
//     Student<int> S1;
//     //cout<<S1.add<int>(10,20)<<endl;
//     cout << "Hello World!" << endl;
//     return 0;
// }

// void add(int a)
// {
//     cout<<a+1<<endl;
// }
// int main()
// {
//     int b = 5;
//     add(b);
//     cout<<b;
//     return 0;
// }

class shallowcopy
{
private:
    int *m_data;
public :
    shallowcopy(int data)
    {
        m_data = new int(data);
    }
    shallowcopy(const shallowcopy &obj)
    {
        m_data = obj.m_data;
    }
    void show()
    {
        cout<<"Value :"<<*m_data<<endl;
        delete m_data;
    }
};


int main()
{
    shallowcopy obj = 10;
    shallowcopy obj2 = obj;

    obj.show();
    obj2.show();
    return 0;
}
