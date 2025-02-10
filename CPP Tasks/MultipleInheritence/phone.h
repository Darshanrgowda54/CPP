#ifndef PHONE_H
#define PHONE_H

class Phone
{
    int m_dialpad;
public:
    Phone(int dialpad);
    ~Phone();
    void makecall();
    void display();
};

#endif // PHONE_H
