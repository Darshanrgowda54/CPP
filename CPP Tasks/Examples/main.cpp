#include "student.h"
#include <iostream>

using namespace std;

// int main()
// {
//     int arr[6] = {22,23,24,25,26,27};
//     int *p,i;
//     p = arr;
//     for(int i = 0 ;i<6;i++)
//     {
//     cout<<*p<<endl;
//         p++;
//     }
//     i = *p++ - *p--;
//     cout<<i<<endl;
//     return 0;
// }

int main()
{
    Student<int, int> student;
    int result = student.add(10, 30);
    cout << "Result: " << result << endl;
    cout << "Hello World!" << endl;
    return 0;
}
