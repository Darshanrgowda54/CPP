#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle
{
    int m_wheels;
    int m_mirrors;
public:
    Vehicle();
    Vehicle(int wheels, int mirrors);
    ~Vehicle();
};

#endif // VEHICLE_H
