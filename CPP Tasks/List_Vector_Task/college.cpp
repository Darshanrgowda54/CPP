#include "college.h"
#include <iostream>
using namespace std;

College::College()
{
    std::cout<<"College Constructor Called"<<std::endl;
    m_management = new CollegeManagement;
    m_student = new Student;
    m_staff = new Staff;
    m_management->initStudent(&m_studentlist);
    m_management->initStaff(&m_stafflist);
}

College::~College()
{
    delete m_staff;
    delete m_student;
    delete m_management;
    std::cout<<"College Destructor Called"<<std::endl;
}

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


void College::functionOperation()
{
    //CollegeManagement collegemanagement;
    int choice;
    string studentname,staffname,studentID,staffID,studentNumber,staffNumber;

    while(true)
    {
        cout<<"\n____College Management____"<<endl;
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
            //collegemanagement.addStudent(studentID,studentname,studentNumber);
            m_management->addStudent(studentID,studentname,studentNumber);
            break;
        case Deletestudent:
            cout<<"Enter Student ID to Delete: ";
            cin>>studentID;
            //collegemanagement.deleteStudent(studentID);
            m_management->deleteStudent(studentID);
            break;
        case Updatestudent:
            cout<<"Enter Student ID to Update: ";
            cin>>studentID;
            cout<<"Enter the Name: ";
            cin>>studentname;
            cout<<"Enter the MobileNumber: ";
            cin>>studentNumber;
            //collegemanagement.updateStudent(studentID,studentname,studentNumber);
            m_management->updateStudent(studentID,studentname,studentNumber);
            break;
        case Displaystudent:
            cout<<"Display Students"<<endl;
            //collegemanagement.displayStudent();
            m_management->displayStudent();
            break;
        case Addstaff:
            cout<<"Enter the StaffID: ";
            cin>>staffID;
            cout<<"Enter the StaffName: ";
            cin>>staffname;
            cout<<"Enter the StaffNumber: ";
            cin>>staffNumber;
            //collegemanagement.addStaff(staffID,staffname,staffNumber);
            m_management->addStaff(staffID,staffname,staffNumber);
            break;
        case Deletestaff:
            cout<<"Enter StaffID to Delete: ";
            cin>>staffID;
            //collegemanagement.deleteStaff(staffID);
            m_management->deleteStaff(staffID);
            break;
        case Updatestaff:
            cout<<"Enter StaffID to Update: ";
            cin>>staffID;
            cout<<"Enter the StaffName: ";
            cin>>staffname;
            cout<<"Enter the StaffNumber: ";
            cin>>staffNumber;
            //collegemanagement.updateStaff(staffID,staffname,staffNumber);
            m_management->updateStaff(staffID,staffname,staffNumber);
            break;
        case Displaystaff:
            cout<<"Display Staffs"<<endl;
            //collegemanagement.displayStaff();
            m_management->displayStaff();
            break;
        case Exit:
            return;
        default:
            cout<<"Enter the Valid Choice"<<endl;
            break;
        }
    }
}



