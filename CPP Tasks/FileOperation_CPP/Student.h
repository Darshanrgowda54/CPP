#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class Student
{
public:
    Student();
    ~Student();
    Student(std::string name,std::string mobilenumber,std::string id,std::string address);

    std::string getName();
    std::string getMobileNumber();
    std::string getId();
    std::string getAddress();
private:
    std::string m_name;
    std::string m_mobileNumber;
    std::string m_id;
    std::string m_address;
};

#endif // STUDENT_H
