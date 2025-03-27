#include "loginmanagementsystem.h"
using namespace std;

int main()
{
    // VehicleManager manager;
    // manager.applicationManager();
    LoginManagementSystem* loginmanagementsystem = new LoginManagementSystem;
    loginmanagementsystem->applicationManager();
    delete loginmanagementsystem;
    return 0;
}




