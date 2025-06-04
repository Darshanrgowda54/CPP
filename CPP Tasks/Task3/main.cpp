#include "Employee.h"
#include "Office.h"

using namespace std;

int main()
{
    Office office("Pthinks");

    Employee darshan("Darshan",&office);
    Employee prathik("Prathik",&office);
    Employee harsha("Harsha",&office);
    Employee naveen("Naveen",&office);
    Employee manoj("Manoj",&office);

    Employee e6("Girish",&darshan);
    Employee e7("Dhanush",&darshan);

    office.print();
    office.getMe();
    office.findChild("Pthinks");
    office.findChild("Darshan");

    return 0;
}
