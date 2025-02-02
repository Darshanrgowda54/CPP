#ifndef CAR_H
#define CAR_H

class Car
{
private:
    int m_privatecar;
    int m_publiccar;
    int m_protectedcar;
public:
    Car(int publiccar, int privatecar, int protectedcar);
    ~Car();

};

#endif // CAR_H
