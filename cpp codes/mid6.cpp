#include<iostream>
using namespace std;
 int main(){
 char op;
 cout<<"Enter an operator:";
 cin>>op;
 switch(op){

 case '@':
 cout<<"Hello World"<<endl;
 break;

 case '#':
 cout<<"Welcome"<<endl;
 break;

 default:
 cout<<"Thank You";
 return 0;
 }
 }
