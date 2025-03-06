#include "StudentManagement.h"
#include <iostream>
// #include <fstream>
// #include <string>

using namespace std;


int main()
{
    StudentManagement studentmanagement;
    studentmanagement.filechoice();
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
