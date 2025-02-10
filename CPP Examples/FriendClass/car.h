#ifndef CAR_H
#define CAR_H
class Vehical;

class Car
{
public:
    //Vehical *V = new Vehical;   // friend Class using
    Car();
    ~Car();
    //void display();   // friend Class using
    void printme(Vehical &v);   // friend funnction using
};

#endif // CAR_H
