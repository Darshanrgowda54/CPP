#ifndef ACCELERATOR_H
#define ACCELERATOR_H

class Wheel;

class Accelerator
{
    Wheel* m_wheel;
public:
    Accelerator();
    Accelerator(Wheel* wheel);
    ~Accelerator();
    void AcceleratorPress();
};

#endif // ACCELERATOR_H
