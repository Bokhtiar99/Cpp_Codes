#include<iostream>
using namespace std;

class Student
{
    float cgpa;

public:
    Student(float cg)
    {
        cgpa = cg;
    }

    ~Student()
    {
        cout << "Student CGPA: " << cgpa << endl;
    }
};

int main()
{
    Student s1(3.77);
    Student s2(3.33);
    return 0;
}

