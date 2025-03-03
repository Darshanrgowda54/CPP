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
    int choice,studentNumber,staffNumber;
    string studentname,staffname,studentID,staffID;

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
        case AddStudent:
            cout<<"Enter the ID: ";
            cin>>studentID;
            cout<<"Enter the Name: ";
            cin>>studentname;
            cout<<"Enter the MobileNumber: ";
            cin>>studentNumber;
            college.addStudent(studentID,studentname,studentNumber);
            break;
        case Deletestudent:
            cout<<"Enter Student ID to Delete: ";
            cin>>studentID;
            college.deleteStudent(studentID);
            break;
        case Updatestudent:
            cout<<"Enter Student ID to Update: ";
            cin>>studentID;
            cout<<"Enter the Name: ";
            cin>>studentname;
            cout<<"Enter the MobileNumber: ";
            cin>>studentNumber;
            college.updateStudent(studentID,studentname,studentNumber);
            break;
        case Displaystudent:
            cout<<"Display Students"<<endl;
            college.displayStudent();
            break;
        case Addstaff:
            cout<<"Enter the StaffID: ";
            cin>>staffID;
            cout<<"Enter the StaffName: ";
            cin>>staffname;
            cout<<"Enter the StaffNumber: ";
            cin>>staffNumber;
            college.addStaff(staffID,staffname,staffNumber);
            break;
        case Deletestaff:
            cout<<"Enter StaffID to Delete: ";
            cin>>staffID;
            college.deleteStaff(staffID);
            break;
        case Updatestaff:
            cout<<"Enter StaffID to Update: ";
            cin>>staffID;
            cout<<"Enter the StaffName: ";
            cin>>staffname;
            cout<<"Enter the StaffNumber: ";
            cin>>staffNumber;
            college.updateStaff(staffID,staffname,staffNumber);
            break;
        case Displaystaff:
            cout<<"Display Staffs"<<endl;
            college.displayStaff();
            break;
        case Exit:
            exit(0);
        default:
            cout<<"Enter the Valid Choice"<<endl;
            break;
        }
    }
    return 0;
}
