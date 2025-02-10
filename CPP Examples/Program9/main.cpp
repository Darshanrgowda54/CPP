#include "student.h"

//using namespace std;

int main()
{
    Student *student1 = new Student;
    Student *student2 = new Student;
    *student1->m_age = 23;
    *student1->m_mobilenumber = 1234567890;
    student1->printme();
    delete student1;

    *student2->m_age = 100;
    *student2->m_mobilenumber = 987654321;
    student2->printme();

    delete student2;
    return 0;
}

