#ifndef RBI_H
#define RBI_H

class RBI
{
    int m_insurance;
public:
    RBI();
    ~RBI();
   virtual void amount(int insurance);
};

#endif // RBI_H
