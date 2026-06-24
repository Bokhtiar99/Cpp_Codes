#include<iostream>
using namespace std;
 int main (){
 int num1,num2,num3,num4,largest;
 cout<<"Enter num1:";
 cin>>num1;
 cout<<"Enter num2:";
 cin>>num2;
 cout<<"Enter num3:";
 cin>>num3;
 cout<<"Enter num4:";
 cin>>num4;
 if(num1>num2 && num1>num3 && num1>num4){
    largest=num1;
 }
 else if(num2>num1 && num2>num3 && num2>num4){
    largest=num2;
 }
 else if(num3>num1 && num3>num2 && num3>num4){
    largest=num3;
 }
 else{
    largest=num4;
 }
 cout<<"largest number is:"<<largest<<endl;
 if(largest%2==0){
    cout<<"The largest number is an even"<<endl;
 }
 else{
    cout<<"The largest number is a odd";
 }

 }
