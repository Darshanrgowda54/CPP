#include "watch.h"
#include <iostream>

using namespace std;

int main()
{
    float a = 1000;
    std::string b = "Titan";

    Watch watch(a,b);
    Watch fastTrack;
    Watch rolex;
    Watch sonata;

    cout<<"watch price :"<<watch.m_price<<endl;
    cout<<"watch brand :"<<watch.m_brand<<endl;
    cout << "Hello World!" << endl;
    return 0;
}
