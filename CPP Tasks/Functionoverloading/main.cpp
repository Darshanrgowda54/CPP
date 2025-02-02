#include <iostream>

using namespace std;

void calculatesalary(float baicsalary);
void calculatesalary(float baicsalary,float bonus);
void calculatesalary(float basicsalary,float increment,float bonus);

int main()
{
    calculatesalary(1000);
    calculatesalary(1000,200.100);
    calculatesalary(1000,200.100,500);
    cout << "Hello World!" << endl;
    return 0;
}


void calculatesalary(float baicsalary)
{
    cout<<"Salary :"<<baicsalary<<endl;
}

void calculatesalary(float baicsalary, float bonus)
{
    float Salary = baicsalary+bonus;
    cout<<"Salary :"<<Salary<<endl;
}

void calculatesalary(float basicsalary,float increment,float bonus)
{
    float Salary = basicsalary+increment+bonus;
    cout<<"Salary :"<<Salary<<endl;
}
