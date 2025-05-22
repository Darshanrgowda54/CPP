#ifndef CAR_H
#define CAR_H

class Car
{
    int* m_Wheels;
public:
    Car(int wheel);
    ~Car();

    Car(const Car& c);

    void print();
};

#endif // CAR_H
