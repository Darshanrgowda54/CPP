#ifndef USERS_H
#define USERS_H

#include <string>
class Users
{
public:
    Users();
    ~Users();
    Users(std::string name, std::string password, std::string contactNumber, std::string email);

    std::string getName();
    std::string getPassword();
    std::string getContactNumber();
    std::string getEmailId();

    void setName(std::string name);
    void setPassword(std::string password);
    void setContactNumber(std::string number);
    void setEmail(std::string email);

private:
    std::string m_userName;
    std::string m_password;
    std::string m_contactNumber;
    std::string m_userEmail;
};

#endif // USERS_H
