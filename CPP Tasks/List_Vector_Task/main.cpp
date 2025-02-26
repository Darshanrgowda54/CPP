#include <iostream>
#include "college.h"

using namespace std;

enum
{
    AddStudent =1,
    Deletestudent,
    Updatestudent,
    Displaystudent,
    Addstaff,
    Deletestaff,
    Updatestaff,
    Displaystaff,
    Exit
};


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

        switch (choice)
        {
        case 1:
            cout<<"Enter the RollNumber: ";
            cin>>rollnumber;
            cout<<"Enter the Name: ";
            cin>>name;
            cout<<"Enter the Age: ";
            cin>>age;
            college.addStudent(rollnumber,name,age);
            break;
        case 2:
            cout<<"Enter Student RollNumber to Delete: ";
            cin>>rollnumber;
            college.deleteStudent(rollnumber);
            break;
        case 3:
            cout<<"Enter Student RollNumber to Update: ";
            cin>>rollnumber;
            cout<<"Enter the Name: ";
            cin>>name;
            cout<<"Enter the age: ";
            cin>>age;
            college.updateStudent(rollnumber,name,age);
            break;
        case 4:
            cout<<"Display Students"<<endl;
            college.displayStudent();
            break;
        case 5:
            cout<<"Enter the StaffID: ";
            cin>>staffID;
            cout<<"Enter the StaffName: ";
            cin>>staffname;
            cout<<"Enter the StaffNumber: ";
            cin>>staffnumber;
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
            cout<<"Enter the StaffName: ";
            cin>>staffname;
            cout<<"Enter the StaffNumber: ";
            cin>>staffnumber;
            college.updateStaff(staffID,staffname,staffnumber);
            break;
        case 8:
            cout<<"Display Staffs"<<endl;
            college.displayStaff();
            break;
        case 9:
            exit(0);
        default:
            cout<<"Enter the Valid Choice"<<endl;
            break;
        }
    }
    return 0;
}
