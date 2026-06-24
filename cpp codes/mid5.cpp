#include<iostream>
using namespace std;
 int main(){
 float num1,num2,result;
 char op;
 cout<<"Enter two number:";
 cin>>num1>>num2;
 cout<<"Which operator do you want to perform?:";
 cin>>op;
 if(op=='$'){
   result=num1+num2;
   cout<<"Summation:"<<result<<endl;
 }
 else if(op=='%'){
   result=num1-num2;
   cout<<"Subtraction:"<<result<<endl;
 }
 else if(op=='&'){
    result=num1*num2;
    cout<<"Multiplication:"<<result<<endl;
 }
 else if(op=='@'){
    result=num1/num2;
    cout<<"Division:"<<result<<endl;
 }
 else{
   cout<<"Invalid operator";

   return 0;
 }
 }

