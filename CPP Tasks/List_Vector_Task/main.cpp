#include <iostream>
#include "college.h"

using namespace std;

int main()
{
    College college;
    int choice,rollnumber,age,staffID,staffnumber;
    string name,staffname;

    while(true)
    {
        cout<<"College Management"<<endl;
        cout<<"1. Add Student"<<endl;
        cout<<"2. Delete Student"<<endl;
        cout<<"3. Update Student"<<endl;
        cout<<"4. Display Students"<<endl;
        cout<<"5. Add Staff"<<endl;
        cout<<"6. Delete Staff"<<endl;
        cout<<"7. Update Staff"<<endl;
        cout<<"8. Display Staffs"<<endl;
        cout<<"9. Exit"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;

        switch (choice) {
        case 1:
            cout <<"Enter RollNumber , Name , Age: ";
            cin >>rollnumber>>name>>age;
            college.addStudent(rollnumber,name,age);
            break;
        case 2:
            cout<<"Enter Student RollNumber to Delete: ";
            cin>>rollnumber;
            college.deleteStudent(rollnumber);
            break;
        case 3:
            cout<<"Enter Student RollNumber to Update: ";
            cin>>rollnumber>>name>>age;
            college.updateStudent(rollnumber,name,age);
            break;
        case 4:
            cout<<"Display Students"<<endl;
            college.displayStudent();
            break;
        case 5:
            cout <<"Enter StaffID , StaffName , StaffNumber: ";
            cin >>staffID>>staffname>>staffnumber;
            college.addStaff(staffID,staffname,staffnumber);
            break;
        case 6:
            cout<<"Enter StaffID to Delete: ";
            cin>>staffID;
            college.deleteStaff(staffID);
            break;
        case 7:
            cout<<"Enter StaffID to Update: ";
            cin>>staffID;
            college.updateStaff(staffID,staffname,staffnumber);
            break;
        case 8:
            cout<<"Display Staffs"<<endl;
            college.displayStaff();
            break;
        case 9:
            exit(0);
        default:
            cout<<"Enter the Valid Choice";
            break;
        }
    }
    return 0;
}
