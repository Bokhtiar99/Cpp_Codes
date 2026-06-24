/*#include<iostream>
using namespace std;
struct student
{
    string name;
    string id;
    int age;
    float cgpa;
    void inputinfo()
    {
        cout<<"Enter Name:";
        getline(cin,name);
        cout<<"Enter Id:";
        cin>>id;
        cout<<"Enter Age:";
        cin>>age;
        cout<<"Enter CGPA:";
        cin>>cgpa;
        cin.ignore();
    }
    void printinfo()
    {
        cout<<"Name:"<<name<<endl;
        cout<<" Id: "<<id<<endl;
        cout<<" Age:"<<age<<endl;
        cout<<"Cgpa:"<<cgpa<<endl;
    }
};
int main()
{
    student s1;
    s1.inputinfo();
    s1.printinfo();
    return 0;
}*/

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    string id;
private:
    int age;
    float cgpa;
public:
    void inputInfo() {
        cout << "Enter Student name: ";
        getline(cin, name);
        cout << "Enter Student ID: ";
        cin >> id;
        cout << "Enter Student age: ";
        cin >> age;
        cout << "Enter Student CGPA: ";
        cin >> cgpa;
        cin.ignore();
    }

    void printInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Student ID: " << id << endl;
        cout << "Student Age: " << age << endl;
        cout << "Student CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s1, s2;

    cout << "Enter information for Student 1:" << endl;
    s1.inputInfo();

    cout << "Enter information for Student 2:" << endl;
    s2.inputInfo();

    cout << "Student 1 information:" << endl;
    s1.printInfo();

    cout << "Student 2 information:" << endl;
    s2.printInfo();

    return 0;
}

