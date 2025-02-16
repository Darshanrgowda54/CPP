#include "student.h"
#include <iostream>

using namespace std;

int main()
{
    Student<string,int> S1;
    S1.addStudent("Darshan",22);
    cout << "Hello World!" << endl;
    return 0;
}
