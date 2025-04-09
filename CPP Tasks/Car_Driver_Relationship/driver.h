#ifndef DRIVER_H
#define DRIVER_H
#include <string>

class Driver
{
public:
    Driver();
    ~Driver();

    void setName(std::string newName);
    std::string getName();
private:
    std::string m_name;
};

#endif // DRIVER_H
