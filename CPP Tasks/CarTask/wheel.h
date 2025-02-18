#ifndef WHEEL_H
#define WHEEL_H

class Car;

class Wheel
{
    Car* m_car;
public:
    Wheel();
    Wheel(Car* c);
    ~Wheel();
    void wheelmoved();
    void wheelstop();
};

#endif // WHEEL_H
