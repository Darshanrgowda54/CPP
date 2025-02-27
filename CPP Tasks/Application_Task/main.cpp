#include "app.h"
#include "instagram.h"
#include "telegram.h"
#include "whatsapp.h"
#include <iostream>

using namespace std;

enum
{
    WHATSAPP = 1,
    INSTAGRAM,
    TELEGRAM,
    EXIT
};

int main()
{
    App *app = nullptr;
    int choice;
    while(true)
    {
        cout<<"Android Application Package"<<endl;
        cout<<"1. WhatApp"<<endl;
        cout<<"2. Instagram"<<endl;
        cout<<"3. Telegram"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Choice the Application :";
        cin>>choice;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Please enter a number." << endl;
            continue;
        }

        switch (choice)
        {
        case WHATSAPP:
            app = new WhatsAPP;
            app->appname();
            app->appicon();
            app->open();
            delete app;
            break;
        case INSTAGRAM:
            app = new Instagram;
            app->appname();
            app->appicon();
            app->open();
            delete app;
            break;
        case TELEGRAM:
            app = new Telegram;
            app->appname();
            app->appicon();
            app->open();
            break;
        case EXIT:
            exit(0);
        default:
            cout<<"Invalid Choice"<<endl;
            break;
        }
    }
    cout << "Hello World!" << endl;
    return 0;
}
