#include "loginmanagementsystem.h"
#include "vehiclemanager.h"
#include <iostream>
using namespace std;

int main()
{
    // VehicleManager manager;
    // manager.applicationManager();
    LoginManagementSystem* loginmanagementsystem = new LoginManagementSystem;
    loginmanagementsystem->applicationManager();
    delete loginmanagementsystem;

    // const int a = 10;
    // int const *b = &a;
    // cout<<*b<<endl;
    // *b = 20;
    // cout<<*b<<endl;
    return 0;
}




