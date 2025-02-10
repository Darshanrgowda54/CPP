// #include "car.h"
// #include <iostream>

// using namespace std;

// int main()
// {
//     Car C;
//     Car C1("M3","BMW");
//     cout << "Hello World!" << endl;
//     return 0;
// }



#include <iostream>

class MyClass
{
public:
    void Destroy(const std::string& message)
    {
        std::cout << message << std::endl;
    }

    ~MyClass()
    {
        std::cout << "Hello" << std::endl;
    }
};

int main()
{
    MyClass obj;
    obj.Destroy("Goodbye!");
    return 0;
}
