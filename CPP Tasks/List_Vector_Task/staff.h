#ifndef STAFF_H
#define STAFF_H
#include <string>

class Staff
{
private:
    int m_staffID;
    std::string m_staffname;
    int m_staffNumber;
public:
    //Staff();
    Staff(int staffID,std::string staffname,int staffnumber);
    int getID();
    std::string getname();
    int getstaffnumber();
    void set(std::string staffname,int staffnumber);
    ~Staff();
};

#endif // STAFF_H
