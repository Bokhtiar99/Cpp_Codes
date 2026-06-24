#include<iostream>
using namespace std;
 int main(){
 char p='A';
 float q=5.55;
 char r=p++;
 int s=q;
 cout<<"Stored in p:"<<p<<endl;
 cout<<"Stored in q:"<<q<<endl;
 cout<<"Stored in r:"<<r<<endl;
 cout<<"Stored in s:"<<s<<endl;
 cout<<"Stored in p:"<<++p<<endl;
 cout<<"Stored in q:"<<q--<<endl;
 cout<<"Stored in q:"<<(int)q<<endl;
 ++r;
 s++;
 cout<<"Stored in r:"<<r<<endl;
 cout<<"Stored in s:"<<s<<endl;
 cout<<"The End!"<<endl;
 return 11;
 }
