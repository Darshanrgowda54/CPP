#include "StudentManagement.h"
#include <iostream>
using namespace std;


int main()
{
    StudentManagement studentmanagement;

    int choice;

    while(true)
    {
        std::cout<<"\nFile Choice"<<std::endl;
        std::cout<<"1. TEXT FILE"<<std::endl;
        std::cout<<"2. CSV FILE"<<std::endl;
        std::cout<<"3. EXIT"<<std::endl;
        std::cout<<"Enter your Choice: ";
        std::cin>>choice;

        switch (choice)
        {
        case 1:
            studentmanagement.txtFileOperation();
            break;
        case 2:
            studentmanagement.csvFileOperation();
            break;
        case 3:
            return 0;
        default:
            std::cout<<"Invalid"<<std::endl;
            break;
        }
    }
    cout<<"Hello World!"<<endl;
    return 0;
}






// void addStudent()
// {
//     ofstream outf("students.txt",ios::app);

//     cout << "Enter the Name: ";
//     string name;
//     cin >> name;
//     outf << name<<",";

//     cout << "Enter Student Number: ";
//     string number;
//     cin >> number;
//     outf << number << endl;

//     outf.close();
//     cout << "Student added successfully" << endl;
// }

// void displayStudent()
// {
//     ifstream inf("students.txt");

//     string name, number;
//     while (getline(inf, name, ',') && getline(inf, number))
//     {
//         cout << "\nStudent Name: " << name << endl;
//         cout << "Student Number: " << number << endl;
//     }

//     inf.close();
// }

// int main()
// {
//     while (true)
//     {
//         int choice = 0;
//         cout << "\nStudent Data" << endl;
//         cout << "1. Add Student" << endl;
//         cout << "2. Display Student" << endl;
//         cout << "3. Exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice)
//         {
//         case 1:
//             addStudent();
//             break;
//         case 2:
//             displayStudent();
//             break;
//         case 3:
//             cout << "Exit" << endl;
//             return 0;
//         default:
//             cout << "Invalid choice" << endl;
//             break;
//         }
//     }
//     return 0;
// }
