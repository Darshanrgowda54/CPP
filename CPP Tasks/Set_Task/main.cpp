#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> mySet;

    // Inserting elements
    mySet.insert(40);
    mySet.insert(10);
    mySet.insert(5);
    mySet.insert(20);
    mySet.insert(15);
    mySet.insert(10);

    // Displaying elements (Automatically sorted)
    cout << "Elements in the set: ";
    for (int element : mySet)
    {
        cout << element << " ";
    }
    cout << endl;

    // Checking if an element exists
    int num = 10;
    if (mySet.count(num) > 0)
    {
        cout << num << " is present in the set." << endl;
    }
    else
    {
        cout << num << " is not present in the set." << endl;
    }

    // Erasing an element
    mySet.erase(15);
    cout << "After erasing 15: ";
    for (int element : mySet)
    {
        cout << element << " ";
    }
    cout << endl;

    // Finding an element
    set<int>::iterator it = mySet.find(20);
    if (it != mySet.end())
    {
        cout << "Found: " << *it << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    // Size of the set
    cout << "Size of the set: " << mySet.size() << endl;

    return 0;
}
