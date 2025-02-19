#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>
#include <set>
#include <unordered_set>

class Student
{
    std::string m_name;
    int m_age;
    std::string m_address;
public:
    Student();
    Student(std::string name,int age,std::string address);
    friend std::ostream& operator<<(std::ostream& output, const Student& student);
    ~Student();
};

template <typename T>
std::ostream &operator<<(std::ostream &out, const std::set<T> &set)
{
    out << "{ ";
    for (const auto &value : set)
    {
        out << value << ", ";
    }
    out << "}";
    return out;
}


template <typename T>
std::ostream &operator<<(std::ostream &out, const std::unordered_set<T> &unorderedSet)
{
    out << "{ ";
    for (const auto &value : unorderedSet) {
        out << value << ", ";
    }
    out << "}";
    return out;
}

#endif // STUDENT_H
