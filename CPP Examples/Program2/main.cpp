#include "telivision.h"
#include <iostream>

using namespace std;

int main()
{
    Telivision TV(1000,"Mi",32);

    cout << "price :"<< TV.m_price <<"\n";
    cout << "brand :"<< TV.m_brand <<"\n";
    cout << "size :"<< TV.m_size <<"\n";

    TV.display();

    return 0;
}


