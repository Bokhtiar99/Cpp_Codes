#include<iostream>
using namespace std;
 int main(){
 float avg,total,num1,num2,num3;
 cout<<"Enter three number:";
 cin>>num1>>num2>>num3;
 total=num1+num2+num3;
 avg=total/3;
 cout<<"Average is:"<<avg<<endl;
 if(avg>50 && avg<65){
   cout<<"Greater than 50 and less than 65"<<endl;
 }
 else{
   cout<<"End of the code";
   return 0;
 }
 }
