#include<iostream>
using namespace std;
 int main(){
 float a=6.55;
 float b=a+0.45;
 int c=a;
 cout<<"Value of a:"<<a<<endl;
 cout<<"Value of b:"<<b<<endl;
 cout<<"Value of c:"<<c<<endl;
 b=b+0.55;
 a=b++;
 c=--b;
 b++;
 cout<<"Value of a:"<<a<<endl;
 cout<<"Value of b:"<<b<<endl;
 cout<<"Value of c:"<<c<<endl;

 cout<<"Value of a:"<<(int)a++<<endl;
 cout<<"Value of b:"<<--b<<endl;
 cout<<"Value of c:"<<++c<<endl;
 cout<<"Value of a:"<<a<<endl;
 return 0;
 }
