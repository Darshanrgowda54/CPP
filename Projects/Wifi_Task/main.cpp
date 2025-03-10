#include "CsvFile.h"
#include <iostream>

using namespace std;

enum
{
    WriteData = 1,
    ReadData,
    Exit
};

int main()
{
    CsvFile csvfile;
    Wifi wifi;

    int choice;
    while(true)
    {
        cout<<"\n1.Add Wifi Details"<<endl;
        cout<<"2.Display Wifi Details"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;

        switch (choice)
        {
        case WriteData:
            csvfile.writeWifiData();
            break;
        case ReadData:
        {
            wifi.m_list = csvfile.readWifiData();
            wifi.displayWifiDetails();
        }
        break;
        case Exit:
            return 0;
        default:
            cout<<"Invalid Choice"<<endl;
            break;
        }
    }
    cout << "Hello World!" << endl;
    return 0;
}
