#include<iostream>
using namespace std;
 int main(){
 int num;
 int sum;
 for(int i=1; i<6; i++){
 cout<<"Enter num"<<i<<":";
 cin>>num;
 if(num%2!=0){
 sum+=num;
 }
 }
 cout<<"sum of the odd number:"<<sum<<endl;



     }
