#ifndef ENGINE_H
#define ENGINE_H

class Engine
{
    int m_wheel;
    int m_mirror;
public:
    Engine();
    Engine(int wheel,int mirror);
    ~Engine();
    void printme();
};

#endif // ENGINE_H
