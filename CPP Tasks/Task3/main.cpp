#include "Employee.h"
#include "Office.h"

using namespace std;

int main()
{
    Office office;
    Employee e1("Darshan",&office);
    Employee e2("Girish",&office);
    Employee e3("Prathik",&office);
    Employee e4("Tony",&office);
    Employee e5("IronMan",&office);
    Employee e6("Dhanush",&office);
    Employee e7("Naveen",&office);
    Employee e8("Manoj",&office);
    Employee e9("Kiran",&office);
    Employee e10("Harsha",&office);
    //Employee e11("Ajay",&e1);
    //Employee e12("Abjith",&e2);

    office.print();

    return 0;
}
