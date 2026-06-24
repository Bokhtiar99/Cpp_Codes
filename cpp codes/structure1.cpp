#include<iostream>
using namespace std;
struct student{
string name;
string id;
int age;
double cgpa;
};
int main(){
student s1,s2;
s1.name="Bokhtiar Mondol";
s2.name="ahsanul";
cout<<"Enter student1 id:";
cin>>s1.id;
cout<<"Enter student1 age:";
cin>>s1.age;
cout<<"Enter student2 id:";
cin>>s2.id;
cout<<"Enter student2 age:";
cin>>s2.age;
s1.cgpa=3.88;
s2.cgpa=3.77;
cout<<"Name:"<<s1.name<<" "<<s2.name<<endl;
cout<<"ID:"<<s1.id<<" "<<s2.id<<endl;
cout<<"Age:"<<s1.age<<" "<<s2.age<<endl;
cout<<"CGPA"<<s1.cgpa<<" "<<s2.cgpa<<endl;
return 0;
}
