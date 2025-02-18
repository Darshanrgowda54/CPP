#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    list<int> list1;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_front(0);
    list1.push_front(-1);
    //list1.clear();

    for(int i : list1)
    {
        cout<<i<<endl;
    }

    vector<string> vector1;
    vector1.push_back("abc");
    vector1.push_back("xyz");
    for(const string &i : vector1)
    {
        cout<<i<<endl;
    }
    vector1.pop_back();
    for(int i = 0;i < size(vector1);i++)
    {
        cout<<vector1[i]<<endl;
    }
    vector1.insert(vector1.begin()+0 ,"wertyu");
    for(int i = 0;i < size(vector1);i++)
    {
        cout<<vector1[i]<<endl;
    }

    cout << "Hello World!" << endl;
    return 0;
}
