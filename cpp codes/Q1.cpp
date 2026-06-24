#include<iostream>
#include<string>
using namespace std;
struct student{
string name;
int roll_no;
int marks[5];
};
int main(){
student students[5];
for(int i=0; i<5; i++){
    cout<<"Input details for student :"<<i+1<<endl;
    cout<<"Name: ";
    cin>>students[i].name;
    cout<<"Roll Number: ";
    cin>>students[i].roll_no;
    cout<<"Marks for 5 subjects: "<<endl;
    for(int j=0; j<5; j++){
        cin>>students[i].marks[j];
    }
}
for(int i=0; i<5; i++){
    int total=0;
    for(int j=0; j<5; j++){
        total+=students[i].marks[j];
    }
    float average=total/5.0;
     cout <<"Student: "<<students[i].name<<endl<<"Total Marks: "<<total<<endl<<"Average Marks: "<<average<< endl;
}
return 0;
}
