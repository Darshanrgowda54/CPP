#ifndef LOGINMANAGEMENTSYSTEM_H
#define LOGINMANAGEMENTSYSTEM_H

#include "admin.h"
#include "user.h"
#include "vehiclemanager.h"
#include <list>
class LoginManagementSystem
{
public:
    LoginManagementSystem();
    ~LoginManagementSystem();

    void adminMenu();
    void userMenu();

    void adminLoginMenu();
    void userLoginMenu();

    void adminLogin();
    void userLogin();

    void registerAdmin();
    void registerUser();

    void applicationManager();

private:
    FileOperation* m_fileoperation;
    VehicleManager* vehicle;

    std::list<Admin*> m_adminList;
    std::list<User*> m_userList;
};

#endif // LOGINMANAGEMENTSYSTEM_H
