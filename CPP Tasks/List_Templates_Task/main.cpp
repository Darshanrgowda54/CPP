#include "student.h"
#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

int main()
{
    Student student("Darshan",22,"Bangalore");
    cout << student << endl;

    set<string> set = {"Dhanush", "22", "Bangalore"};
    cout << "Set: " << set << endl;

    unordered_set<string> unorderedSet = {"Manoj","22","Bangalore"};
    cout << "Unordered Set: " << unorderedSet << endl;

    return 0;
}
