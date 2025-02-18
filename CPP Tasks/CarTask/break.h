#ifndef BREAK_H
#define BREAK_H

class Wheel;

class Break
{
    Wheel* m_wheel;
public:
    Break();
    Break(Wheel* m);
    ~Break();
    void breakapplied();
};

#endif // BREAK_H
