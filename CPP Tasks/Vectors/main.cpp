#include <iostream>
#include <vector>

using namespace std;

void display(vector<int>&v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{
    vector<int>v;
    cout<<"Initial size: "<<v.size()<<endl;

    int x;
    cout<<"Enter Five Integer Values"<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>x;
        v.push_back(x);
    }


    // for(auto i=v.begin();i!=v.end();i++)
    // {
    //     cout<<v[i];
    // }

    cout<<"Size after adding Values: ";
    cout<<v.size()<<endl;

    cout<<"Current Contents:"<<endl;
    display(v);

    v.push_back(6);

    cout<<"Size = " <<v.size()<<endl;
    cout<<"contents now: "<<endl;
    display(v);

    vector<int>::iterator itr = v.begin();
    itr = itr+3;
    v.insert(itr,1,9);

    cout<<"\n1Constents after inserting:"<<endl;
    display(v);

    v.erase(v.begin()+3,v.begin()+5);
    cout<<"\nConstents after inserting:"<<endl;
    display(v);

    //cout<<""
    return 0;
}
