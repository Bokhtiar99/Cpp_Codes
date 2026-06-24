#include<iostream>
using namespace std;
class Student
{
public:
    string name;
    string id;
private:
    float cgpa;
protected:
    int age;
public:
    void inputinfo(string NM,string ID,float CG,int AG)
    {
       name=NM;
       id=ID;
       cgpa=CG;
       age=AG;
    }
    void printinfo()
    {
        cout<<"Student name:"<<name<<endl;
        cout<<"Student id:"<<id<<endl;
        cout<<"Student cgpa:"<<cgpa<<endl;
        cout<<"Student age:"<<age<<endl;

    }
};
int main()
{
    Student s1;
    s1.inputinfo("Bokhtiar","24-56115-1",3.77,21);
    s1.printinfo();
    return 0;
}
