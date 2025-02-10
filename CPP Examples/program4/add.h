#ifndef ADD_H
#define ADD_H
#include <string>

class Add
{
public:
    Add();
    void add(int a,int b);
    void add(float a,float b);
    void add(int a, std::string name);
    int add(int a,int b);
    float add(int a, int b);
};

#endif
