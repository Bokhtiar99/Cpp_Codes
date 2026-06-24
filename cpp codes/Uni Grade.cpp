#include<iostream>
using namespace std;
 int main(){
 float marks;
 cout<<"Enter marks:";
 cin>>marks;
 if(marks>=90 && marks<=100){
    cout<<"Grade A+ & GPA is 4.00"<<endl;
 }
 else if(marks>=85 && marks<90){
    cout<<"Grade A & GPA is 3.75"<<endl;
 }
 else if(marks>=80 && marks<85){
    cout<<"Grade B+ & GPA is 3.50"<<endl;
 }
 else if(marks>=75 && marks<80){
    cout<<"Grade B & GPA is 3.25"<<endl;
 }
 else if(marks>=70 && marks<75){
    cout<<"Grade C+ & GPA is 3.00"<<endl;
 }
 else if(marks>=65 && marks<70){
    cout<<"Grade C & GPA is 2.75"<<endl;
 }
 else if(marks>=60 && marks<65){
    cout<<"Grade D+ & GPA is 2.50"<<endl;
 }
 else if(marks>=50 && marks<60){
    cout<<"Grade D & GPA is 2.25"<<endl;
 }
 else{
    cout<<"Grade F & GPA is 0.00"<<endl;
 }
 return 0;
}



