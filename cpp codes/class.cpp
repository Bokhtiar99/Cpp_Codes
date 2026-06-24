#include<iostream>
using namespace std;
class Student
{
public:
    string name;
    string id;
    void inputinfo()
    {
        cout<<"Enter student name:";
        cin>>name;
        cout<<"Enter student id:";
        cin>>id;
    }
    void printinfo()
    {
        cout<<"Student name:"<<name<<endl;
        cout<<"Student Id  :"<< id <<endl;
    }
};
int main()
{
    Student s1;
    s1.inputinfo();
    cout<<"Student1 information:"<<endl;
    s1.printinfo();
    Student s2;
    s2.inputinfo();
    cout<<"Student2 information:"<<endl;
    s2.printinfo();
}
