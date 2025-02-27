#include <iostream>
#include <map>

using namespace std;


int main()
{
    map<string,int>age;

    age["Darshan"] = 22;
    age["Dhanush"] = 22;
    age["manoj"] = 23;
    age["Girish"] = 23;

    age.insert({"Priya",22});
    age.insert({"Likitha",23});

    if(age.find("Darshan") == age.end())
    {
        cout<<"Name found"<<endl;
    }
    else
    {
        cout<<"Name Not Found"<<endl;
    }

    age["Darshan"] = 30;

    age.erase("Darshan");

    for(auto i = age.begin();i != age.end();i++)
    {
        cout<<i->first<<":"<<i->second<<endl;
    }
}






//-----------------------------------------------------------------------------------------//














// #include <iostream>
// #include <list>
// using namespace std;

// int main() {
//     // Creating a list of integers
//     list<int> numbers = {10, 20, 30, 40, 50};

//     // Adding elements
//     numbers.push_back(60);   // Adds to the end
//     numbers.push_front(0);   // Adds to the beginning

//     // Accessing elements using an iterator
//     cout << "List elements: ";
//     for (auto it = numbers.begin(); it != numbers.end(); ++it) {
//         cout << *it << " ";
//     }
//     cout << endl;

//     // Modifying elements (Example: Changing the first element)
//     auto it = numbers.begin();
//     *it = -1; // Changes the first element to -1

//     // Deleting elements
//     numbers.pop_back();  // Removes the last element
//     numbers.pop_front(); // Removes the first element

//     // Displaying the modified list
//     cout << "Modified list: ";
//     for (int num : numbers) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }
