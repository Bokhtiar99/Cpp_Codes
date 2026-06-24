#include<iostream>
using namespace std;
 int main (){
 int number;
 int sum;
 cout<<"Enter five number:";
 for(int i=0; i<5; i++){
        cin>>number;
   if(number%2==0){
   sum +=number;
   }
 }
 cout<<"Sum of even number "<<sum<<endl;
 return 0;
 }
