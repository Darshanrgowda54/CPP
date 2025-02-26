#ifndef STUDENT_H
#define STUDENT_H

template <typename A,typename B>
class Student
{
    A m_maths;
    B m_science;
public:
    Student();
    ~Student();
    A add(A maths,B science);
};

#endif // STUDENT_H
