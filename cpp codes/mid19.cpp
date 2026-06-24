#include<iostream>
#include<cstring>
using namespace std;
 int main(){
 char s1[]="Happy";
 char s2[]="Halloween";
 char s3[]="Year";
 cout<<"Before s1:"<<s1<<endl;
 cout<<"Copied form:"<<strcpy(s1,s2)<<endl;
 cout<<"After s1:"<<s1<<endl;
 cout<<"Length of s1:"<<strlen(s1)<<endl;
 return 0;
 }
