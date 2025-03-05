#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string,string>India;

    India.insert({"Karnataka","Bengaluru"});
    India.insert({"TamilNadu","Chennai"});
    India.insert({"AndhraPradesh","Amaravati"});
    India.insert({"Telangana","Hyderabad"});
    India.insert({"Kerala","Thiruvananthapuram"});

    for(auto i = India.begin();i != India.end();i++)
    {
        cout<<i->first<<": "<<i->second<<endl;
    }

    string state;
    cout<<"Enter state"<<endl;
    cin>>state;

    return 0;
}
