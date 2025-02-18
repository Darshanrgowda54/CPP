#ifndef CAR_H
#define CAR_H

class Engine;

class Car
{
    Engine* m_engine;
public:
    Car();
    Car(Engine* e);
    ~Car();
    void carstart();
    void carmoved();
    void carstop();
};

#endif // CAR_H
