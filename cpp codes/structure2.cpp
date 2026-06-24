#include<iostream>
using namespace std;
struct student{
string name;
string id;
float cgpa;
void inputinfo()
{
    cout<<"Enter name:";
    getline(cin,name);
    cout<<"Enter ID:";
    cin>>id;
    cout<<"Enter CGPA:";
    cin>>cgpa;
    cin.ignore();
}
void printinfo()
{
    cout<<"Name:"<<name<<endl;
    cout<<" Id: "<< id <<endl;
    cout<<"CGPA:"<<cgpa<<endl;
}
};
int main()
{
    student s1,s2;
    s1.inputinfo();
    s1.printinfo();
    s2.inputinfo();
    s2.printinfo();

}
