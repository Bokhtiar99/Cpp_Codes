#include<iostream>
using namespace std;
 int main(){
 int num;
 int sum;
 for(int i=1; i<=5; i++){
 cout<<"Enter number "<<i<<":";
 cin>>num;
  if(num%2==0){
  sum+=num;
  }
  }
 cout<<"Sum of even number:"<<sum;
 }
