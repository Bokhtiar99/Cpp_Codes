#include<iostream>
using namespace std;
 int main(){
 int total,attended;
 cout<<"Number of total classes held:";
 cin>>total;
 cout<<"Number of attended classes:";
 cin>>attended ;
 double percentage;
 percentage=double(attended)/total*100;
 cout<<"The percentage of attendance:"<<percentage<<endl;
 if(percentage>=80){
    cout<<"The student is allowed to sit for the exam";
 }
 else{
    cout<<"The student is not allowed to sit for the exam";
 }
 }
