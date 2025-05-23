#ifndef ADMIN_H
#define ADMIN_H

#include <string>
class Admin
{
public:
    Admin();
    ~Admin();
    Admin(std::string Id, std::string password, std::string name);

    std::string getId();
    std::string getPassword();
    std::string getName();

    void setId(std::string Id);
    void setPassword(std::string password);
    void setName(std::string name);

private:
    std::string m_Id;
    std::string m_Password;
    std::string m_adminName;
};

#endif // ADMIN_H
